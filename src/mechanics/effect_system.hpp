#pragma once

enum class EffectTiming {
    ON_SWITCH_IN,
    ON_SWITCH_OUT,
    ON_MOVE_USE,
    ON_TAKING_DAMAGE,
    ON_DEALING_DAMAGE,
    ON_KNOCKOUT,
    ON_BEING_KNOCKED_OUT,
    END_OF_TURN,
    START_OF_TURN
};