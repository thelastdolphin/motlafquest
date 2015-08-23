#ifndef OUTPUT_H
#define OUTPUT_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
class OutputSys{
public:
    OutputSys();
    ~OutputSys();

    static void out_MainMenu();

private:
    static const std::string MotlafQuest;
    static std::string out_newGame();
    static std::string out_saveGame();
    static std::string out_loadGame();
    static std::string out_showShortens();
    static std::string out_exitGame();
    static std::string out_pleaseEnter();
};
#endif
