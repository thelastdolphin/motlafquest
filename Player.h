#ifndef PLAYER_H
#define PLAYER_H
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
    const Player& player();

    virtual void buildStrength()=0;
    virtual void buildAgility()=0;
    virtual void buildMind()=0;

protected:
    Player player_;
};

class Create{
public:
    Create() : playerBuilder_(NULL){}
    Create::~Create(){
        if (playerBuilder_)
            delete playerBuilder_;
    }

    void playerBuilder(PlayerBuilder*);

    const Player& getPlayer();

    void constructPlayer();

private:
    PlayerBuilder* playerBuilder_;
};


#endif
