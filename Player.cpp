#include "Player.h"

Player* Player::_instance = 0;

Player* Player::Instance(){
    if (_instance == 0) {
        _instance = new Player;
    }
    return _instance;
}

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
