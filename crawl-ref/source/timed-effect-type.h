#pragma once

enum timed_effect_type
{
    TIMER_CORPSES,
    TIMER_HELL_EFFECTS,
#if TAG_MAJOR_VERSION == 34
    TIMER_SICKNESS,
#endif
    TIMER_CONTAM,
#if TAG_MAJOR_VERSION == 34
    TIMER_DETERIORATION,
#endif
    TIMER_GOD_EFFECTS,
#if TAG_MAJOR_VERSION == 34
    TIMER_SCREAM,
#endif
    TIMER_FOOD_ROT,
    TIMER_PRACTICE,
    TIMER_LABYRINTH,
    TIMER_ABYSS_SPEED,
    TIMER_JIYVA,
    TIMER_EVOLUTION,
    TIMER_CIGOTUVIS_PLAGUE,
#if TAG_MAJOR_VERSION == 34
    TIMER_BRIBE_TIMEOUT,
#endif
    NUM_TIMERS,
};
