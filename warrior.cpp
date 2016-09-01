#include "warrior.h"
#include "QueryHandler.h"

void WarriorBuilder::buildStrength(int WStrength) {
    WStrength=WarriorStrength;
    player_.strength(WStrength);
}

void WarriorBuilder::buildAgility(int WAgility) {
    WAgility=WarriorAgility;
    player_.agility(WAgility);
}

void WarriorBuilder::buildMind(int WMind) {
    WMind=WarriorMind;
    player_.mind(WMind);
}


void RogueBuilder::buildStrength(int RStrength) {
    RStrength=RogueStrength;
    player_.strength(RStrength);
}

void RogueBuilder::buildAgility(int RAgility) {
    RAgility=RogueAgility;
    player_.agility(RAgility);
}

void RogueBuilder::buildMind(int RMind) {
    RMind=RogueMind;
    player_.mind(RMind);
}
