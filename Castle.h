#ifndef CASTLE_H
#define CASTLE_H
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
    static Castle& Instance();
private:
    Castle();
    ~Castle();

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




#endif
