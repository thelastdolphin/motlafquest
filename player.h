#pragma once
#include "agreements.h"
#include "log.h"
#include <memory>

class Player {
// Product
public:
    Player();
    virtual ~Player();
    void showPlayer() const;
    
    virtual void setStr(const unsigned int);
    virtual void setAgi(const unsigned int);
    virtual void setMnd(const unsigned int);
    virtual void setHP(const unsigned int);
    virtual void setAP(const unsigned int);

private:
    AttributeValue strength_;
    AttributeValue agility_;
    AttributeValue mind_;
    AttributeValue hp_;
    AttributeValue ap_;
};

class PlayerBuilder {
// Abstract Builder
public:
    PlayerBuilder() {}
    virtual ~PlayerBuilder() = default;
    std::shared_ptr<Player> getPlayer();

    void createNewPlayerProduct();

    virtual void buildStrength()=0;
    virtual void buildAgility()=0;
    virtual void buildMind()=0;
    virtual void buildActionPoints()=0;
    virtual void buildHitPoints()=0;
protected:
    std::shared_ptr<Player> player_;
};

class Create{
// Director
public:
    Create() : playerBuilder_(NULL){}
    ~Create(){}

    void setPlayerBuilder(PlayerBuilder*);

    std::shared_ptr<Player> getPlayer();

    void constructPlayer();

private:
    PlayerBuilder* playerBuilder_;
};
