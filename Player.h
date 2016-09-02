#pragma once
#include "Log.h"

class Player {

public:
//static Player* Instance();
Player();
virtual ~Player();

void strength(int);
void agility(int);
void mind(int);
void open() const;

private:
//static Player* _instance;
int strength_;
int agility_;
int mind_;



/*protected:
    Player();*/

};

class PlayerBuilder {
public:
    virtual ~PlayerBuilder() = default;
    const Player& player();
    virtual void buildStrength(int);
    virtual void buildAgility(int);
    virtual void buildMind(int);

protected:
    Player player_;
};

class Create{
public:
    Create() : playerBuilder_(NULL){}
    ~Create(){
        if (playerBuilder_)
            delete playerBuilder_;
    }

    void playerBuilder(PlayerBuilder*);

    const Player& getPlayer();

    void constructPlayer(int str, int agi, int min);

private:
    PlayerBuilder* playerBuilder_;
};
