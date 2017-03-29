#include "player.h"

Player::Player(){
}

Player::~Player(){
}

void Player::showPlayer() const {
    std::cout << "Player with "
              << strength_
              << " strength "
              << agility_
              << " agility "
              << mind_
              << " mind. HP:"
              << hp_
              << " AP:"
              << ap_
              << std::endl;
}

void Player::setStr(const unsigned int str){
    strength_ = str;
}

void Player::setAgi(const unsigned int agi){
    agility_ = agi;
}

void Player::setMnd(const unsigned int mnd){
    mind_ = mnd;
}

void Player::setHP(const unsigned int hp) {
    hp_ = hp;
}

void Player::setAP(const unsigned int ap) {
    ap_ = ap;
}

// ================================


std::shared_ptr<Player> PlayerBuilder::getPlayer(){
    return player_;
}

void PlayerBuilder::createNewPlayerProduct() {
    player_.reset(new Player);
}

// ================================


void Create::setPlayerBuilder(PlayerBuilder* playerBuilder) {
    playerBuilder_ = playerBuilder;
}

std::shared_ptr<Player> Create::getPlayer(){
    return playerBuilder_->getPlayer();
}

void Create::constructPlayer(){
    playerBuilder_->createNewPlayerProduct();
    playerBuilder_->buildStrength();
    playerBuilder_->buildAgility();
    playerBuilder_->buildMind();
    playerBuilder_->buildActionPoints();
    playerBuilder_->buildHitPoints();
}
