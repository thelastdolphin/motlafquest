#ifndef INOUT_H
#define INOUT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "player.h"

class InOut {
public:
    //InOut * execInputSys();
    //std::string inputGetMainEnemyName();
    //std::string inputGetPlayerClass(Player MainPlayer);
    virtual ~InOut();
    static int ioGetOk(); // возвращает ноль, если строка правильна
    static unsigned int ioGetAnswer();
    static void ioMainMenu() noexcept;
protected:
    InOut();
    static const std::string MotlafQuest;
    static const std::string ioNewGame() noexcept;
    static const std::string ioSaveGame() noexcept;
    static const std::string ioLoadGame() noexcept;
    static const std::string ioShowShortens() noexcept;
    static const std::string ioExitGame() noexcept;
    static void ioPleaseEnter(char chosenVariant) noexcept;
};

#endif // INOUT_H
