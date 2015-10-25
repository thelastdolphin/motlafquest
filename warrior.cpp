#include "warrior.h"

void WarriorBuilder::buildStrength(void) {
    player_.strength(10);
}

void WarriorBuilder::buildAgility(void){
    player_.agility(7);
}

void WarriorBuilder::buildMind(void){
    player_.mind(3);
}
