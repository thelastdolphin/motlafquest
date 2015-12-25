#ifndef WARRIOR_H
#define WARRIOR_H
#include "Player.h"

/*class WarriorBuilder : public PlayerBuilder {
public:
void buildStrength(void);

void buildAgility(void);

void buildMind(void);

};*/

class KingBuilder : public PlayerBuilder {
public:
    int BuildTargetClass(std::string);
    void buildStrength(int);

    void buildAgility(int);

    void buildMind(int);


};

#endif // WARRIOR_H

