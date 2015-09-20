#ifndef PLAYER_H
#define PLAYER_H
#include "Log.h"

class Player {

public:
static Player* Instance();

virtual ~Player();

private:
static Player* _instance;

protected:
    Player();

};


#endif
