#pragma once
#include <list>
#include "Log.h"

class Room {
private:
    Room();
    ~Room();


    bool isOpened;
    unsigned int number;

public:
    unsigned int getRoomNumber(Room *);
};


class Castle {
public:
    //Castle();
    //virtual ~Castle();
    static Castle& Instance(int);
private:
    Castle(int);
    ~Castle();

    int CastleSize = 0;
    Castle(Castle const&) = delete;
    Castle& operator= (Castle const&) = delete;
};

/*
class SpikeCastle : public Castle {

};

class DarkCastle : public Castle {

};

class MagicCastle : public Castle{
public:
    MagicCastle();
};
*/
