#pragma once

#include "battle/battle_state.hpp"
#include "mechanics/effect_system.hpp"

#include <string>

// Base ability class
class Ability {
public:
    virtual ~Ability() = default;
    
    // Main method - each ability implements this
    virtual void trigger_effect(EffectTiming timing, BattleContext& context) = 0;
    
    // Basic info
    virtual const std::string& name() const = 0;
    virtual const std::string& description() const = 0;
    
    // For copying Pokemon (minimax needs deep copies)
    virtual std::unique_ptr<Ability> clone() const = 0;
};

