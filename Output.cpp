#include "Output.h"

OutputSys::OutputSys(){

}

OutputSys::~OutputSys(){

}

// PRIVATE

std::string OutputSys::out_newGame(){
    std::string NewGame = "Start New Game";
    return NewGame;
}

std::string OutputSys::out_saveGame(){
    std::string SaveGame = "Save Game";
    return SaveGame;
}

std::string OutputSys::out_loadGame(){
    std::string LoadGame = "Load Game";
    return LoadGame;
}

std::string OutputSys::out_showShortens(){ // здесь нужно
    std::string Shortens = "Shortens: ";
    return Shortens;
}

std::string OutputSys::out_exitGame(){
    std::string ExitGame = "Exit Game";
    return ExitGame;
}

std::string OutputSys::out_pleaseEnter(){
    std::string PleaseEnter = "Please, enter ";
    return PleaseEnter;
}

// END

// PUBLIC

void OutputSys::out_MainMenu() {
    std::string MainMenu = "Main Menu";
    std::cout << "Motlaf Quest" << std::endl //OutputSys::MotlafQuest << std::endl
              << MainMenu << std::endl
              << out_newGame() << std::endl
              << out_loadGame() << std::endl
              << out_showShortens() << std::endl
              << out_exitGame() << std::endl
              ;
}

// END

