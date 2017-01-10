#include "Builders.h"

void WarriorBuilder::buildStrength(){
    player_->setStr(MAXADD);
}
void WarriorBuilder::buildAgility(){
    player_->setAgi(MIDADD);
}
void WarriorBuilder::buildMind(){
    player_->setMnd(BASADD);
}
void WarriorBuilder::buildHitPoints(){
    // посчитать ХП воина
    const unsigned int WarriorHP = 10; // условное число
    player_->setHP(WarriorHP);
}
void WarriorBuilder::buildActionPoints(){
    // посчитать АП воина
    const unsigned int WarriorAP = 10;
    player_->setAP(WarriorAP);
}

// ==================

void RogueBuilder::buildStrength(){
    player_->setStr(MIDADD);
}
void RogueBuilder::buildAgility(){
    player_->setAgi(MAXADD);
}
void RogueBuilder::buildMind(){
    player_->setMnd(BASADD);
}
void RogueBuilder::buildHitPoints(){
    // посчитать ХП воина
    const unsigned int RogueHP = 10; // условное число
    player_->setHP(RogueHP);
}
void RogueBuilder::buildActionPoints(){
    // посчитать АП воина
    const unsigned int RogueAP = 10;
    player_->setAP(RogueAP);
}

void MageBuilder::buildStrength(){
    player_->setStr(BASADD);
}
void MageBuilder::buildAgility(){
    player_->setAgi(MIDADD);
}
void MageBuilder::buildMind(){
    player_->setMnd(MAXADD);
}
void MageBuilder::buildHitPoints(){
    // посчитать ХП воина
    const unsigned int WarriorHP = 10; // условное число
    player_->setHP(WarriorHP);
}
void MageBuilder::buildActionPoints(){
    // посчитать АП воина
    const unsigned int WarriorAP = 10;
    player_->setAP(WarriorAP);
}
