//
// Created by gamerpuppy on 7/8/2021.
//

#include <nlohmann/json.hpp>
#include <iomanip>

#include "sts_common.h"
#include "game/SaveFile.h"

#include "constants/SaveFileMappings.h"

using namespace sts;

std::string readFile(std::string path)
{
    std::string result;
    std::ifstream ifs(path.c_str(), std::ios::binary);
    std::stringstream ss;

    if (!ifs.is_open()) {
        result.clear();
        return result;
    } else if (ifs.eof()) {
        result.clear();
    }

    ss << ifs.rdbuf();
    result = ss.str();
    return result;
}

char getBase64Value(char c) {
    char value;
    if (c  >= 'A' && c <= 'Z') {
        value = c-'A';

    } else if (c >= 'a' && c <= 'z') {
        value = c-'a'+26;

    } else if (c >= '0' && c <= '9') {
        value = c-'0'+52;

    } else if (c == '+') {
        value = 62;

    } else if (c == '/') {
        value = 63;

    } else {
        value = -1;
    }

    return value;
}

static std::vector<char> decodeBase64(const std::string &base64Str) {
    std::vector<char> out;

    int totalBits = 0;
    char lastData = 0;

    for (int i = 0; i < base64Str.size(); ++i) {
        char c = base64Str[i];
        if (c == '=') {

            int paddingLength = (i + 1 < base64Str.size()) ? 2 : 1;
            int charsToDecode = 3-paddingLength;
            int charsDecoded = out.size() % 3;
            if (charsToDecode < charsDecoded) {
                out.push_back(lastData);
            }
            return out;
        }

        auto dataBits = getBase64Value(c);
        totalBits += 6;

        int mod8 = totalBits % 8;
        if (mod8 == 0) {
            char value = lastData | dataBits;
            out.push_back(value);

        } else if (mod8 == 2) {
            char value = lastData | (dataBits >> 2);
            out.push_back(value);
            lastData = (dataBits << 6) & 0xC0;

        } else if (mod8 == 4) {
            char value = lastData | (dataBits >> 4);
            out.push_back(value);
            lastData = (dataBits << 4) & 0xF0;

        } else if (mod8 == 6) {
            lastData = (dataBits << 2) & 0xFC;
        }
    }
    return out;
}

static std::string xorWithKey(const std::vector<char> &a) {
    static constexpr char key[] { 107, 101, 121 };
    std::string out;
    out.reserve(a.size());
    for(int i = 0; i < a.size(); ++i) {
        const char keyChar = key[i % 3];
        char decoded = (static_cast<char>(a[i]) ^ keyChar) & static_cast<char>(0xFF);
        out.push_back(decoded);
    }
    return out;
}

sts::SaveFile::SaveFile(const std::string &json, sts::CharacterClass cc): json(json), cc(cc) {
    auto j = nlohmann::json::parse(json);

#ifdef sts_print_debug
    std::cout << std::setw(4) << j << '\n';
#endif

    j.at("seed").get_to(seed);
    j.at("ascension_level").get_to(ascension_level);
    j.at("act_num").get_to(act_num);
    j.at("gold").get_to(gold);
    j.at("purgeCost").get_to(purgeCost);

    j.at("current_health").get_to(current_health);
    j.at("max_health").get_to(max_health);


    j.at("room_x").get_to(room_x);
    j.at("room_y").get_to(room_y);
    j.at("floor_num").get_to(floor_num);
    j.at("post_combat").get_to(post_combat);
    j.at("smoked").get_to(smoked);
    j.at("mugged").get_to(mugged);
    j.at("current_room").get_to(current_room);

    j.at("potion_seed_count").get_to(potion_seed_count);
    j.at("relic_seed_count").get_to(relic_seed_count);
    j.at("event_seed_count").get_to(event_seed_count);
    j.at("monster_seed_count").get_to(monster_seed_count);
    j.at("merchant_seed_count").get_to(merchant_seed_count);
    j.at("card_random_seed_count").get_to(card_random_seed_count);
    j.at("card_seed_count").get_to(card_seed_count);
    j.at("treasure_seed_count").get_to(treasure_seed_count);

    j.at("has_emerald_key").get_to(has_emerald_key);
    j.at("has_ruby_key").get_to(has_ruby_key);
    j.at("has_sapphire_key").get_to(has_sapphire_key);

    j.at("card_random_seed_randomizer").get_to(card_random_seed_randomizer);
    j.at("potion_chance").get_to(potion_chance);
    float eventChances[4];
    j.at("event_chances").get_to(eventChances);
    monsterChance = eventChances[1];
    shopChance = eventChances[2];
    treasureChance = eventChances[3];

    j.at("chose_neow_reward").get_to(chose_neow_reward);
    j.at("neow_bonus").get_to(neow_bonus);
    j.at("neow_cost").get_to(neow_cost);

    j.at("potions").get_to(potions);

    for (auto c : j.at("cards")) {
        Card card;
        c.at("id").get_to(card.id);

        int upgrades = 0;
        c.at("upgrades").get_to(upgrades);

        if (card.id == CardId::SEARING_BLOW) {
            card.misc = upgrades;
            card.upgraded = card.misc;
        } else {
            c.at("misc").get_to(card.misc);
            card.upgraded = upgrades > 0;
        }
        cards.push_back(card);
    }

    j.at("relics").get_to(relics);
    j.at("relic_counters").get_to(relic_counters);

    if (j.contains("combat_rewards")) {
        j.at("combat_rewards").get_to(combat_rewards);
    }

    j.at("boss_relics").get_to(boss_relics);
    j.at("shop_relics").get_to(shop_relics);
    j.at("common_relics").get_to(common_relics);
    j.at("uncommon_relics").get_to(uncommon_relics);
    j.at("rare_relics").get_to(rare_relics);

    j.at("event_list").get_to(event_list);
    j.at("one_time_event_list").get_to(one_time_event_list);
    j.at("monster_list").get_to(monster_list);
    j.at("elite_monster_list").get_to(elite_monster_list);
    j.at("boss_list").get_to(boss_list);
}


sts::SaveFile sts::SaveFile::fromJson(const std::string &json, sts::CharacterClass cc) {
    return SaveFile(json, cc);
}

sts::SaveFile sts::SaveFile::loadFromPath(const std::string &path, sts::CharacterClass cc) {
    std::string utf8Content = readFile(path);
    auto dataBits = decodeBase64(utf8Content);
    auto json = xorWithKey(dataBits);
    return SaveFile(json, cc);
}
