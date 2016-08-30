#pragma once
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
class OutputSys{
public:
     OutputSys();
    ~OutputSys();

    static void out_MainMenu() noexcept;

protected:
    static const std::string MotlafQuest;
    static const std::string out_newGame() noexcept;
    static const std::string out_saveGame() noexcept;
    static const std::string out_loadGame() noexcept;
    static const std::string out_showShortens() noexcept;
    static const std::string out_exitGame() noexcept;
    static void out_pleaseEnter(char chosenVariant) noexcept;
};
