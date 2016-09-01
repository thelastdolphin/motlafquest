#pragma once
#include "Player.h"

class WarriorBuilder : public PlayerBuilder {
public:
    void buildStrength(int);
    void buildAgility(int);
    void buildMind(int);

private:
        int WarriorStrength=4;
        int WarriorAgility=2;
        int WarriorMind=1;
};

class RogueBuilder : public PlayerBuilder {
public:
    void buildStrength(int);
    void buildAgility(int);
    void buildMind(int);

private:
        int RogueStrength=1;
        int RogueAgility=4;
        int RogueMind=2;
};

