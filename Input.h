#ifndef INPUT
#define INPUT
#include <iostream>
#include <fstream>
#include <string>

class Input{
    Input(){}
    ~Input(){}

    std::string inputMainEnemyName();
    std::string inputPlayerClass(Player MainPlayer);
};
#endif // INPUT

