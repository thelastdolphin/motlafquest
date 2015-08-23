#ifndef INPUT
#define INPUT
#include "Player.h"
#include "Output.h"
class Input{
public:
    Input();
    ~Input();
//private:
    //std::string inputGetMainEnemyName();
    //std::string inputGetPlayerClass(Player MainPlayer);
    static int inputGetOk(); // возвращает ноль, если строка правильна
    static unsigned int inputGetAnswer();
};
#endif // INPUT

