#ifndef CASTLE_H
#define CASTLE_H
#include <vector>
#include "Log.h"

class Castle {
public:
  Castle();
  virtual ~Castle();
};

class SpikeCastle : public Castle {

};

class DarkCastle : public Castle {

};

class MagicCastle : public Castle{
public:
    MagicCastle();
};





#endif
