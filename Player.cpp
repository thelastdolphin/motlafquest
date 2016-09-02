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

void Player::strength(int strength){
    strength_=strength;
}

void Player::agility(int agility){
    agility_=agility;
}

void Player::mind(int mind){
    mind_=mind;
}

void Player::open() const {
    std::cout << "Player with "
              << strength_
              << " strength "
              << agility_
              << " agility and "
              << mind_
              << " mind."
              << std::endl;
}

//***************************


const Player& PlayerBuilder::player(){
    return player_;
}

void PlayerBuilder::buildStrength(int bStrength) {
    player_.strength(bStrength);
}

void PlayerBuilder::buildAgility(int bAgility) {
   player_.agility(bAgility);
}

void PlayerBuilder::buildMind(int bMind) {
    player_.mind(bMind);
}

//***************************


void Create::playerBuilder(PlayerBuilder* playerBuilder) {
    if(playerBuilder_)
        delete playerBuilder_;
    playerBuilder_ = playerBuilder;
}

const Player& Create::getPlayer(){
    return playerBuilder_->player();
}

void Create::constructPlayer(int str, int agi, int min){
    playerBuilder_->buildStrength(str);
    playerBuilder_->buildAgility(agi);
    playerBuilder_->buildMind(min);
}
