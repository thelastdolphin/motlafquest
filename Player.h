#pragma once
#include "agreements.h"
#include "Log.h"
#include <memory>

class Player {
// Product
public:
//static Player* Instance();
    Player();
    virtual ~Player();
    void showPlayer() const;
    
    virtual void setStr(const unsigned int);
    virtual void setAgi(const unsigned int);
    virtual void setMnd(const unsigned int);
    virtual void setHP(const unsigned int);
    virtual void setAP(const unsigned int);

private:
//static Player* _instance;
    AttributeValue strength_;
    AttributeValue agility_;
    AttributeValue mind_;
    AttributeValue hp_;
    AttributeValue ap_;

/*protected:
    Player();*/

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
