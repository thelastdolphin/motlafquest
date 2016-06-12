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

protected:
    static const std::string MotlafQuest;
    static const std::string out_newGame();
    static const std::string out_saveGame();
    static const std::string out_loadGame();
    static const std::string out_showShortens();
    static const std::string out_exitGame();
    static void out_pleaseEnter(char chosenVariant);
};
#endif
