#include "Player.h"

Player::Player(){
    Log * BasicGameLog = new Log;
    std::string className = "Player";
    BasicGameLog->Lcreate(className);
    delete BasicGameLog;
};

Player::~Player(){
    Log * BuildCastleLog = new Log;
    std::string className = "Player";
    BuildCastleLog->Ldestroy(className);
    delete BuildCastleLog;
}
