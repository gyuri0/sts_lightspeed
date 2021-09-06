//
// Created by gamerpuppy on 6/24/2021.
//

#ifndef STS_LIGHTSPEED_RELICPOOLS_H
#define STS_LIGHTSPEED_RELICPOOLS_H

#include "constants/Relics.h"
#include "constants/CharacterClasses.h"

namespace sts {

//    namespace CommonRelicPools {
//        static constexpr std::array<RelicId, 32> commonRelicPool = { RelicId::WHETSTONE, RelicId::THE_BOOT, RelicId::BLOOD_VIAL, RelicId::MEAL_TICKET, RelicId::PEN_NIB, RelicId::AKABEKO, RelicId::LANTERN, RelicId::REGAL_PILLOW, RelicId::BAG_OF_PREPARATION, RelicId::ANCIENT_TEA_SET, RelicId::SMILING_MASK, RelicId::POTION_BELT, RelicId::PRESERVED_INSECT, RelicId::OMAMORI, RelicId::MAW_BANK, RelicId::ART_OF_WAR, RelicId::TOY_ORNITHOPTER, RelicId::CERAMIC_FISH, RelicId::VAJRA, RelicId::CENTENNIAL_PUZZLE, RelicId::STRAWBERRY, RelicId::HAPPY_FLOWER, RelicId::ODDLY_SMOOTH_STONE, RelicId::WAR_PAINT, RelicId::BRONZE_SCALES, RelicId::JUZU_BRACELET, RelicId::DREAM_CATCHER, RelicId::NUNCHAKU, RelicId::TINY_CHEST, RelicId::ORICHALCUM, RelicId::ANCHOR, RelicId::BAG_OF_MARBLES };
//        static constexpr std::array<RelicId, 28> uncommonRelicPool = { RelicId::BOTTLED_TORNADO, RelicId::SUNDIAL, RelicId::KUNAI, RelicId::PEAR, RelicId::BLUE_CANDLE, RelicId::ETERNAL_FEATHER, RelicId::STRIKE_DUMMY, RelicId::SINGING_BOWL, RelicId::MATRYOSHKA, RelicId::INK_BOTTLE, RelicId::THE_COURIER, RelicId::FROZEN_EGG, RelicId::ORNAMENTAL_FAN, RelicId::BOTTLED_LIGHTNING, RelicId::GREMLIN_HORN, RelicId::HORN_CLEAT, RelicId::TOXIC_EGG, RelicId::LETTER_OPENER, RelicId::QUESTION_CARD, RelicId::BOTTLED_FLAME, RelicId::SHURIKEN, RelicId::MOLTEN_EGG, RelicId::MEAT_ON_THE_BONE, RelicId::DARKSTONE_PERIAPT, RelicId::MUMMIFIED_HAND, RelicId::PANTOGRAPH, RelicId::WHITE_BEAST_STATUE, RelicId::MERCURY_HOURGLASS };
//        static constexpr std::array<RelicId, 25> rareRelicPool = { RelicId::GINGER, RelicId::OLD_COIN, RelicId::BIRD_FACED_URN, RelicId::UNCEASING_TOP, RelicId::TORII, RelicId::STONE_CALENDAR, RelicId::SHOVEL, RelicId::WING_BOOTS, RelicId::THREAD_AND_NEEDLE, RelicId::TURNIP, RelicId::ICE_CREAM, RelicId::CALIPERS, RelicId::LIZARD_TAIL, RelicId::PRAYER_WHEEL, RelicId::GIRYA, RelicId::DEAD_BRANCH, RelicId::DU_VU_DOLL, RelicId::POCKETWATCH, RelicId::MANGO, RelicId::INCENSE_BURNER, RelicId::GAMBLING_CHIP, RelicId::PEACE_PIPE, RelicId::CAPTAINS_WHEEL, RelicId::FOSSILIZED_HELIX, RelicId::TUNGSTEN_ROD };
//        static constexpr std::array<RelicId, 19> bossRelicPool = { RelicId::FUSION_HAMMER, RelicId::VELVET_CHOKER, RelicId::RUNIC_DOME, RelicId::SLAVERS_COLLAR, RelicId::SNECKO_EYE, RelicId::PANDORAS_BOX, RelicId::CURSED_KEY, RelicId::BUSTED_CROWN, RelicId::ECTOPLASM, RelicId::TINY_HOUSE, RelicId::SOZU, RelicId::PHILOSOPHERS_STONE, RelicId::ASTROLABE, RelicId::BLACK_STAR, RelicId::SACRED_BARK, RelicId::EMPTY_CAGE, RelicId::RUNIC_PYRAMID, RelicId::CALLING_BELL, RelicId::COFFEE_DRIPPER, };
//        static constexpr std::array<RelicId, 16> shopRelicPool = { RelicId::SLING_OF_COURAGE, RelicId::HAND_DRILL, RelicId::TOOLBOX, RelicId::CHEMICAL_X, RelicId::LEES_WAFFLE, RelicId::ORRERY, RelicId::DOLLYS_MIRROR, RelicId::ORANGE_PELLETS, RelicId::PRISMATIC_SHARD, RelicId::CLOCKWORK_SOUVENIR, RelicId::FROZEN_EYE, RelicId::THE_ABACUS, RelicId::MEDICAL_KIT, RelicId::CAULDRON, RelicId::STRANGE_SPOON, RelicId::MEMBERSHIP_CARD, };
//    }

    static constexpr RelicId starterRelics[] = {RelicId::BURNING_BLOOD, RelicId::RING_OF_THE_SNAKE, RelicId::CRACKED_CORE, RelicId::PURE_WATER};

    static constexpr RelicId getStarterRelicForClass(CharacterClass cc) {
        return starterRelics[static_cast<int>(cc)];
    };

    namespace Ironclad {
        static constexpr std::array<RelicId, 33> commonRelicPool = {RelicId::WHETSTONE, RelicId::THE_BOOT, RelicId::BLOOD_VIAL, RelicId::MEAL_TICKET, RelicId::PEN_NIB, RelicId::AKABEKO, RelicId::LANTERN, RelicId::REGAL_PILLOW, RelicId::BAG_OF_PREPARATION, RelicId::ANCIENT_TEA_SET, RelicId::SMILING_MASK, RelicId::POTION_BELT, RelicId::PRESERVED_INSECT, RelicId::OMAMORI, RelicId::MAW_BANK, RelicId::ART_OF_WAR, RelicId::TOY_ORNITHOPTER, RelicId::CERAMIC_FISH, RelicId::VAJRA, RelicId::CENTENNIAL_PUZZLE, RelicId::STRAWBERRY, RelicId::HAPPY_FLOWER, RelicId::ODDLY_SMOOTH_STONE, RelicId::WAR_PAINT, RelicId::BRONZE_SCALES, RelicId::JUZU_BRACELET, RelicId::DREAM_CATCHER, RelicId::NUNCHAKU, RelicId::TINY_CHEST, RelicId::ORICHALCUM, RelicId::ANCHOR, RelicId::BAG_OF_MARBLES, RelicId::RED_SKULL };
        static constexpr std::array<RelicId, 30> uncommonRelicPool = {RelicId::BOTTLED_TORNADO, RelicId::SUNDIAL, RelicId::KUNAI, RelicId::PEAR, RelicId::BLUE_CANDLE, RelicId::ETERNAL_FEATHER, RelicId::STRIKE_DUMMY, RelicId::SINGING_BOWL, RelicId::MATRYOSHKA, RelicId::INK_BOTTLE, RelicId::THE_COURIER, RelicId::FROZEN_EGG, RelicId::ORNAMENTAL_FAN, RelicId::BOTTLED_LIGHTNING, RelicId::GREMLIN_HORN, RelicId::HORN_CLEAT, RelicId::TOXIC_EGG, RelicId::LETTER_OPENER, RelicId::QUESTION_CARD, RelicId::BOTTLED_FLAME, RelicId::SHURIKEN, RelicId::MOLTEN_EGG, RelicId::MEAT_ON_THE_BONE, RelicId::DARKSTONE_PERIAPT, RelicId::MUMMIFIED_HAND, RelicId::PANTOGRAPH, RelicId::WHITE_BEAST_STATUE, RelicId::MERCURY_HOURGLASS, RelicId::SELF_FORMING_CLAY, RelicId::PAPER_PHROG };
        static constexpr std::array<RelicId, 28> rareRelicPool = {RelicId::GINGER, RelicId::OLD_COIN, RelicId::BIRD_FACED_URN, RelicId::UNCEASING_TOP, RelicId::TORII, RelicId::STONE_CALENDAR, RelicId::SHOVEL, RelicId::WING_BOOTS, RelicId::THREAD_AND_NEEDLE, RelicId::TURNIP, RelicId::ICE_CREAM, RelicId::CALIPERS, RelicId::LIZARD_TAIL, RelicId::PRAYER_WHEEL, RelicId::GIRYA, RelicId::DEAD_BRANCH, RelicId::DU_VU_DOLL, RelicId::POCKETWATCH, RelicId::MANGO, RelicId::INCENSE_BURNER, RelicId::GAMBLING_CHIP, RelicId::PEACE_PIPE, RelicId::CAPTAINS_WHEEL, RelicId::FOSSILIZED_HELIX, RelicId::TUNGSTEN_ROD, RelicId::MAGIC_FLOWER, RelicId::CHARONS_ASHES, RelicId::CHAMPION_BELT };
        static constexpr std::array<RelicId, 22> bossRelicPool = {RelicId::FUSION_HAMMER, RelicId::VELVET_CHOKER, RelicId::RUNIC_DOME, RelicId::SLAVERS_COLLAR, RelicId::SNECKO_EYE, RelicId::PANDORAS_BOX, RelicId::CURSED_KEY, RelicId::BUSTED_CROWN, RelicId::ECTOPLASM, RelicId::TINY_HOUSE, RelicId::SOZU, RelicId::PHILOSOPHERS_STONE, RelicId::ASTROLABE, RelicId::BLACK_STAR, RelicId::SACRED_BARK, RelicId::EMPTY_CAGE, RelicId::RUNIC_PYRAMID, RelicId::CALLING_BELL, RelicId::COFFEE_DRIPPER, RelicId::BLACK_BLOOD, RelicId::MARK_OF_PAIN, RelicId::RUNIC_CUBE};
        static constexpr std::array<RelicId, 17> shopRelicPool = {RelicId::SLING_OF_COURAGE, RelicId::HAND_DRILL, RelicId::TOOLBOX, RelicId::CHEMICAL_X, RelicId::LEES_WAFFLE, RelicId::ORRERY, RelicId::DOLLYS_MIRROR, RelicId::ORANGE_PELLETS, RelicId::PRISMATIC_SHARD, RelicId::CLOCKWORK_SOUVENIR, RelicId::FROZEN_EYE, RelicId::THE_ABACUS, RelicId::MEDICAL_KIT, RelicId::CAULDRON, RelicId::STRANGE_SPOON, RelicId::MEMBERSHIP_CARD, RelicId::BRIMSTONE };
   };

    namespace Silent {
        static constexpr std::array<RelicId, 33> commonRelicPool = {RelicId::WHETSTONE, RelicId::THE_BOOT, RelicId::BLOOD_VIAL, RelicId::MEAL_TICKET, RelicId::PEN_NIB, RelicId::AKABEKO, RelicId::LANTERN, RelicId::REGAL_PILLOW, RelicId::BAG_OF_PREPARATION, RelicId::ANCIENT_TEA_SET, RelicId::SMILING_MASK, RelicId::POTION_BELT, RelicId::PRESERVED_INSECT, RelicId::OMAMORI, RelicId::MAW_BANK, RelicId::ART_OF_WAR, RelicId::TOY_ORNITHOPTER, RelicId::CERAMIC_FISH, RelicId::VAJRA, RelicId::CENTENNIAL_PUZZLE, RelicId::STRAWBERRY, RelicId::HAPPY_FLOWER, RelicId::ODDLY_SMOOTH_STONE, RelicId::WAR_PAINT, RelicId::BRONZE_SCALES, RelicId::JUZU_BRACELET, RelicId::DREAM_CATCHER, RelicId::NUNCHAKU, RelicId::TINY_CHEST, RelicId::ORICHALCUM, RelicId::ANCHOR, RelicId::BAG_OF_MARBLES, RelicId::SNECKO_SKULL };
        static constexpr std::array<RelicId, 30> uncommonRelicPool = {RelicId::BOTTLED_TORNADO, RelicId::SUNDIAL, RelicId::KUNAI, RelicId::PEAR, RelicId::BLUE_CANDLE, RelicId::ETERNAL_FEATHER, RelicId::STRIKE_DUMMY, RelicId::SINGING_BOWL, RelicId::MATRYOSHKA, RelicId::INK_BOTTLE, RelicId::THE_COURIER, RelicId::FROZEN_EGG, RelicId::ORNAMENTAL_FAN, RelicId::BOTTLED_LIGHTNING, RelicId::GREMLIN_HORN, RelicId::HORN_CLEAT, RelicId::TOXIC_EGG, RelicId::LETTER_OPENER, RelicId::QUESTION_CARD, RelicId::BOTTLED_FLAME, RelicId::SHURIKEN, RelicId::MOLTEN_EGG, RelicId::MEAT_ON_THE_BONE, RelicId::DARKSTONE_PERIAPT, RelicId::MUMMIFIED_HAND, RelicId::PANTOGRAPH, RelicId::WHITE_BEAST_STATUE, RelicId::MERCURY_HOURGLASS, RelicId::NINJA_SCROLL, RelicId::PAPER_KRANE };
        static constexpr std::array<RelicId, 28> rareRelicPool = {RelicId::GINGER, RelicId::OLD_COIN, RelicId::BIRD_FACED_URN, RelicId::UNCEASING_TOP, RelicId::TORII, RelicId::STONE_CALENDAR, RelicId::SHOVEL, RelicId::WING_BOOTS, RelicId::THREAD_AND_NEEDLE, RelicId::TURNIP, RelicId::ICE_CREAM, RelicId::CALIPERS, RelicId::LIZARD_TAIL, RelicId::PRAYER_WHEEL, RelicId::GIRYA, RelicId::DEAD_BRANCH, RelicId::DU_VU_DOLL, RelicId::POCKETWATCH, RelicId::MANGO, RelicId::INCENSE_BURNER, RelicId::GAMBLING_CHIP, RelicId::PEACE_PIPE, RelicId::CAPTAINS_WHEEL, RelicId::FOSSILIZED_HELIX, RelicId::TUNGSTEN_ROD, RelicId::TOUGH_BANDAGES, RelicId::THE_SPECIMEN, RelicId::TINGSHA };
        static constexpr std::array<RelicId, 22> bossRelicPool = {RelicId::FUSION_HAMMER, RelicId::VELVET_CHOKER, RelicId::RUNIC_DOME, RelicId::SLAVERS_COLLAR, RelicId::SNECKO_EYE, RelicId::PANDORAS_BOX, RelicId::CURSED_KEY, RelicId::BUSTED_CROWN, RelicId::ECTOPLASM, RelicId::TINY_HOUSE, RelicId::SOZU, RelicId::PHILOSOPHERS_STONE, RelicId::ASTROLABE, RelicId::BLACK_STAR, RelicId::SACRED_BARK, RelicId::EMPTY_CAGE, RelicId::RUNIC_PYRAMID, RelicId::CALLING_BELL, RelicId::COFFEE_DRIPPER, RelicId::WRIST_BLADE, RelicId::HOVERING_KITE, RelicId::RING_OF_THE_SERPENT};
        static constexpr std::array<RelicId, 17> shopRelicPool = {RelicId::SLING_OF_COURAGE, RelicId::HAND_DRILL, RelicId::TOOLBOX, RelicId::CHEMICAL_X, RelicId::LEES_WAFFLE, RelicId::ORRERY, RelicId::DOLLYS_MIRROR, RelicId::ORANGE_PELLETS, RelicId::PRISMATIC_SHARD, RelicId::CLOCKWORK_SOUVENIR, RelicId::FROZEN_EYE, RelicId::THE_ABACUS, RelicId::MEDICAL_KIT, RelicId::CAULDRON, RelicId::STRANGE_SPOON, RelicId::MEMBERSHIP_CARD, RelicId::TWISTED_FUNNEL };

    };

    namespace Defect {
        static constexpr std::array<RelicId, 33> commonRelicPool = {RelicId::WHETSTONE, RelicId::THE_BOOT, RelicId::BLOOD_VIAL, RelicId::MEAL_TICKET, RelicId::PEN_NIB, RelicId::AKABEKO, RelicId::LANTERN, RelicId::REGAL_PILLOW, RelicId::BAG_OF_PREPARATION, RelicId::ANCIENT_TEA_SET, RelicId::SMILING_MASK, RelicId::POTION_BELT, RelicId::PRESERVED_INSECT, RelicId::OMAMORI, RelicId::MAW_BANK, RelicId::ART_OF_WAR, RelicId::TOY_ORNITHOPTER, RelicId::CERAMIC_FISH, RelicId::VAJRA, RelicId::CENTENNIAL_PUZZLE, RelicId::STRAWBERRY, RelicId::HAPPY_FLOWER, RelicId::ODDLY_SMOOTH_STONE, RelicId::WAR_PAINT, RelicId::BRONZE_SCALES, RelicId::JUZU_BRACELET, RelicId::DREAM_CATCHER, RelicId::NUNCHAKU, RelicId::TINY_CHEST, RelicId::ORICHALCUM, RelicId::ANCHOR, RelicId::BAG_OF_MARBLES, RelicId::DATA_DISK };
        static constexpr std::array<RelicId, 30> uncommonRelicPool = {RelicId::BOTTLED_TORNADO, RelicId::SUNDIAL, RelicId::KUNAI, RelicId::PEAR, RelicId::BLUE_CANDLE, RelicId::ETERNAL_FEATHER, RelicId::STRIKE_DUMMY, RelicId::SINGING_BOWL, RelicId::MATRYOSHKA, RelicId::INK_BOTTLE, RelicId::THE_COURIER, RelicId::FROZEN_EGG, RelicId::ORNAMENTAL_FAN, RelicId::BOTTLED_LIGHTNING, RelicId::GREMLIN_HORN, RelicId::HORN_CLEAT, RelicId::TOXIC_EGG, RelicId::LETTER_OPENER, RelicId::QUESTION_CARD, RelicId::BOTTLED_FLAME, RelicId::SHURIKEN, RelicId::MOLTEN_EGG, RelicId::MEAT_ON_THE_BONE, RelicId::DARKSTONE_PERIAPT, RelicId::MUMMIFIED_HAND, RelicId::PANTOGRAPH, RelicId::WHITE_BEAST_STATUE, RelicId::MERCURY_HOURGLASS, RelicId::SYMBIOTIC_VIRUS, RelicId::GOLD_PLATED_CABLES };
        static constexpr std::array<RelicId, 26> rareRelicPool = {RelicId::GINGER, RelicId::OLD_COIN, RelicId::BIRD_FACED_URN, RelicId::UNCEASING_TOP, RelicId::TORII, RelicId::STONE_CALENDAR, RelicId::SHOVEL, RelicId::WING_BOOTS, RelicId::THREAD_AND_NEEDLE, RelicId::TURNIP, RelicId::ICE_CREAM, RelicId::CALIPERS, RelicId::LIZARD_TAIL, RelicId::PRAYER_WHEEL, RelicId::GIRYA, RelicId::DEAD_BRANCH, RelicId::DU_VU_DOLL, RelicId::POCKETWATCH, RelicId::MANGO, RelicId::INCENSE_BURNER, RelicId::GAMBLING_CHIP, RelicId::PEACE_PIPE, RelicId::CAPTAINS_WHEEL, RelicId::FOSSILIZED_HELIX, RelicId::TUNGSTEN_ROD, RelicId::EMOTION_CHIP };
        static constexpr std::array<RelicId, 22> bossRelicPool = {RelicId::FUSION_HAMMER, RelicId::VELVET_CHOKER, RelicId::RUNIC_DOME, RelicId::SLAVERS_COLLAR, RelicId::SNECKO_EYE, RelicId::PANDORAS_BOX, RelicId::CURSED_KEY, RelicId::BUSTED_CROWN, RelicId::ECTOPLASM, RelicId::TINY_HOUSE, RelicId::SOZU, RelicId::PHILOSOPHERS_STONE, RelicId::ASTROLABE, RelicId::BLACK_STAR, RelicId::SACRED_BARK, RelicId::EMPTY_CAGE, RelicId::RUNIC_PYRAMID, RelicId::CALLING_BELL, RelicId::COFFEE_DRIPPER, RelicId::INSERTER, RelicId::FROZEN_CORE, RelicId::NUCLEAR_BATTERY };
        static constexpr std::array<RelicId, 17> shopRelicPool = {RelicId::SLING_OF_COURAGE, RelicId::HAND_DRILL, RelicId::TOOLBOX, RelicId::CHEMICAL_X, RelicId::LEES_WAFFLE, RelicId::ORRERY, RelicId::DOLLYS_MIRROR, RelicId::ORANGE_PELLETS, RelicId::PRISMATIC_SHARD, RelicId::CLOCKWORK_SOUVENIR, RelicId::FROZEN_EYE, RelicId::THE_ABACUS, RelicId::MEDICAL_KIT, RelicId::CAULDRON, RelicId::STRANGE_SPOON, RelicId::MEMBERSHIP_CARD, RelicId::RUNIC_CAPACITOR };
    };

    namespace Watcher {
        static constexpr std::array<RelicId, 33> commonRelicPool = {RelicId::WHETSTONE, RelicId::THE_BOOT, RelicId::BLOOD_VIAL, RelicId::MEAL_TICKET, RelicId::PEN_NIB, RelicId::AKABEKO, RelicId::LANTERN, RelicId::REGAL_PILLOW, RelicId::BAG_OF_PREPARATION, RelicId::ANCIENT_TEA_SET, RelicId::SMILING_MASK, RelicId::POTION_BELT, RelicId::PRESERVED_INSECT, RelicId::OMAMORI, RelicId::MAW_BANK, RelicId::ART_OF_WAR, RelicId::TOY_ORNITHOPTER, RelicId::CERAMIC_FISH, RelicId::VAJRA, RelicId::CENTENNIAL_PUZZLE, RelicId::STRAWBERRY, RelicId::HAPPY_FLOWER, RelicId::ODDLY_SMOOTH_STONE, RelicId::WAR_PAINT, RelicId::BRONZE_SCALES, RelicId::JUZU_BRACELET, RelicId::DREAM_CATCHER, RelicId::NUNCHAKU, RelicId::TINY_CHEST, RelicId::ORICHALCUM, RelicId::ANCHOR, RelicId::BAG_OF_MARBLES, RelicId::DAMARU };
        static constexpr std::array<RelicId, 30> uncommonRelicPool = {RelicId::BOTTLED_TORNADO, RelicId::SUNDIAL, RelicId::KUNAI, RelicId::PEAR, RelicId::BLUE_CANDLE, RelicId::ETERNAL_FEATHER, RelicId::STRIKE_DUMMY, RelicId::SINGING_BOWL, RelicId::MATRYOSHKA, RelicId::INK_BOTTLE, RelicId::THE_COURIER, RelicId::FROZEN_EGG, RelicId::ORNAMENTAL_FAN, RelicId::BOTTLED_LIGHTNING, RelicId::GREMLIN_HORN, RelicId::HORN_CLEAT, RelicId::TOXIC_EGG, RelicId::LETTER_OPENER, RelicId::QUESTION_CARD, RelicId::BOTTLED_FLAME, RelicId::SHURIKEN, RelicId::MOLTEN_EGG, RelicId::MEAT_ON_THE_BONE, RelicId::DARKSTONE_PERIAPT, RelicId::MUMMIFIED_HAND, RelicId::PANTOGRAPH, RelicId::WHITE_BEAST_STATUE, RelicId::MERCURY_HOURGLASS, RelicId::DUALITY, RelicId::TEARDROP_LOCKET };
        static constexpr std::array<RelicId, 27> rareRelicPool = {RelicId::GINGER, RelicId::OLD_COIN, RelicId::BIRD_FACED_URN, RelicId::UNCEASING_TOP, RelicId::TORII, RelicId::STONE_CALENDAR, RelicId::SHOVEL, RelicId::WING_BOOTS, RelicId::THREAD_AND_NEEDLE, RelicId::TURNIP, RelicId::ICE_CREAM, RelicId::CALIPERS, RelicId::LIZARD_TAIL, RelicId::PRAYER_WHEEL, RelicId::GIRYA, RelicId::DEAD_BRANCH, RelicId::DU_VU_DOLL, RelicId::POCKETWATCH, RelicId::MANGO, RelicId::INCENSE_BURNER, RelicId::GAMBLING_CHIP, RelicId::PEACE_PIPE, RelicId::CAPTAINS_WHEEL, RelicId::FOSSILIZED_HELIX, RelicId::TUNGSTEN_ROD, RelicId::CLOAK_CLASP, RelicId::GOLDEN_EYE };
        static constexpr std::array<RelicId, 21> bossRelicPool = {RelicId::FUSION_HAMMER, RelicId::VELVET_CHOKER, RelicId::RUNIC_DOME, RelicId::SLAVERS_COLLAR, RelicId::SNECKO_EYE, RelicId::PANDORAS_BOX, RelicId::CURSED_KEY, RelicId::BUSTED_CROWN, RelicId::ECTOPLASM, RelicId::TINY_HOUSE, RelicId::SOZU, RelicId::PHILOSOPHERS_STONE, RelicId::ASTROLABE, RelicId::BLACK_STAR, RelicId::SACRED_BARK, RelicId::EMPTY_CAGE, RelicId::RUNIC_PYRAMID, RelicId::CALLING_BELL, RelicId::COFFEE_DRIPPER, RelicId::HOLY_WATER, RelicId::VIOLET_LOTUS };
        static constexpr std::array<RelicId, 17> shopRelicPool = {RelicId::SLING_OF_COURAGE, RelicId::HAND_DRILL, RelicId::TOOLBOX, RelicId::CHEMICAL_X, RelicId::LEES_WAFFLE, RelicId::ORRERY, RelicId::DOLLYS_MIRROR, RelicId::ORANGE_PELLETS, RelicId::PRISMATIC_SHARD, RelicId::CLOCKWORK_SOUVENIR, RelicId::FROZEN_EYE, RelicId::THE_ABACUS, RelicId::MEDICAL_KIT, RelicId::CAULDRON, RelicId::STRANGE_SPOON, RelicId::MEMBERSHIP_CARD, RelicId::MELANGE };
    };

}


#endif //STS_LIGHTSPEED_RELICPOOLS_H
