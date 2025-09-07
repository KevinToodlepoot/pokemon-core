#pragma once

class Pokemon;
class BattleState;
class Move;

struct BattleContext {
    BattleState* battle;
    Pokemon* source;        // Pokemon with this ability
    Pokemon* target;        // Target (if applicable)
    Move* move;             // Move being used (if applicable)
    int* damage_amount;     // Pointer so abilities can modify damage
    bool* should_continue;  // Can stop move execution
    
    BattleContext(BattleState* b, Pokemon* src) 
        : battle(b), source(src), target(nullptr), move(nullptr), 
          damage_amount(nullptr), should_continue(nullptr) {}
};