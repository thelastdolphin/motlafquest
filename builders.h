#pragma once
#include "player.h"

class WarriorBuilder : public PlayerBuilder {

public:
    WarriorBuilder() : PlayerBuilder() {}
    ~WarriorBuilder(){}
    void buildStrength();
    void buildAgility();
    void buildMind();
    void buildHitPoints();
    void buildActionPoints();
};

class RogueBuilder : public PlayerBuilder {
// Concrete Builder
public:
    RogueBuilder() : PlayerBuilder() {}
    ~RogueBuilder() {}
    void buildStrength();
    void buildAgility();
    void buildMind();
    void buildHitPoints();
    void buildActionPoints();
};

class MageBuilder : public PlayerBuilder {
// Concrete Builder
public:
    MageBuilder() : PlayerBuilder() {}
    ~MageBuilder() {}
    void buildStrength();
    void buildAgility();
    void buildMind();
    void buildHitPoints();
    void buildActionPoints();
};
