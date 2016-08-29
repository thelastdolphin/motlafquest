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
