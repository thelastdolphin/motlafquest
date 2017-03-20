#pragma once
//#include <list>
#include <vector>
#include <iostream> // TEMP
#include "log.h"

class Room {
private:



    bool isOpened;


public:
    Room();
    ~Room();
    unsigned int number = 3; // TEMP
    unsigned int getRoomNumber(Room *);
};


class Castle {
public:
    //Castle();
    //virtual ~Castle();
    static Castle& Instance(int);
    void showRooms();
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
