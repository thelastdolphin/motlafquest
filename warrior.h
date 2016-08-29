#pragma once
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

class WarriorBuilder : public PlayerBuilder {
public:
    void buildStrength(int);
    void buildAgility(int);
    void buildMind(int);

private:
        int WarriorStrength = 4;
        int WarriorAgility = 2;
        int WarriorMind = 1;
};


