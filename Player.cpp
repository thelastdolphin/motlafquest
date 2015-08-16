#include "Player.h"

Player::Player(){
    Log * CreatePlayerLog = new Log;
    std::string className = "Player";
    CreatePlayerLog->Lcreate(className);
    delete CreatePlayerLog;
}

Player::~Player(){
    Log * DestroyPlayerLog = new Log;
    std::string className = "Player";
    DestroyPlayerLog->Ldestroy(className);
    delete DestroyPlayerLog;
}
