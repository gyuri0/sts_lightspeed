#include <nlohmann/json.hpp>
#include <game/Game.h>
#include <game/GameContext.h>
#include <game/Card.h>

using json = nlohmann::json;
using namespace sts;

json to_json(const GameContext &gc)
{
    json gameState =
    {
        {"in_combat", gc.screenState == ScreenState::BATTLE},
        {"deck", to_json(gc.deck)},
        {"act", gc.act},
        {"floor", gc.floorNum},
        {"current_hp", gc.curHp},
        {"max_hp", gc.maxHp},
        {"gold", gc.gold},
        {"relics", to_json(gc.relics)}
    };

    return gameState;
}

json to_json(const Deck &deck)
{
    json deckJson = json::array();
    for (const auto &card : deck.cards)
    {
        deckJson.push_back(to_json(card));
    }

    return deckJson;
}

json to_json(const Card &card)
{
    json cardJson =
    {
        {"card_id", card.getName()},
        {"name", card.getName()},
        {"upgrades", card.getUpgraded()},
        {"is_playable", true},
        {"cost", getEnergyCost(card.getId(), card.getUpgraded())},
        {"type", to_json(card.getType())},
        {"exhausts", doesCardExhaust(card.getId(), card.getUpgraded())},
        {"has_target", cardTargetsEnemy(card.getId(), card.getUpgraded())},
        {"price", -1},
        {"uuid", "-1"}

    };

    return cardJson;
}

json to_json(const CardType &type)
{
    switch (type)
    {
        case CardType::ATTACK:
            return 1;
        case CardType::SKILL:
            return 2;
        case CardType::POWER:
            return 3;
        case CardType::CURSE:
            return 5;
        case CardType::STATUS:
            return 4;
        default:
            return -1; 
    }
}

json to_json(const RelicContainer &relic)
{
    json relicJson = json::array();
    for (const auto &relic : relic.relics)
    {
        relicJson.push_back(to_json(relic));
    }

    return relicJson;
}

json to_json(const RelicInstance &relic)
{
    json relicJson =
    {
        {"relic_id", getRelicName(relic.id)},
        {"name", getRelicName(relic.id)},
        {"counter", relic.data},
    };

    return relicJson;
}