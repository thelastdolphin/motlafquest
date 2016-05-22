#include "output.h"

OutputSys::OutputSys(){

}

OutputSys::~OutputSys(){

}

// PRIVATE

const std::string OutputSys::out_newGame() {
    std::string NewGame = "Start New Game";
    return NewGame;
}

const std::string OutputSys::out_saveGame() {
    std::string SaveGame = "Save Game";
    return SaveGame;
}

const std::string OutputSys::out_loadGame() {
    std::string LoadGame = "Load Game";
    return LoadGame;
}

const std::string OutputSys::out_showShortens() { // здесь нужно
    std::string Shortens = "Shortens: ";
    return Shortens;
}

const std::__cxx11::string OutputSys::out_exitGame(){
    std::string ExitGame = "Exit Game";
    return ExitGame;
}

const void OutputSys::out_pleaseEnter(char chosenVariant){
    std::string PleaseEnter = "Please, enter ";
    std::string PlayerClass = "player class: ";
    std::string OpponentName = "name of your bitter enemy: ";

    switch (chosenVariant) {
        case 'p':
            std::cout << PleaseEnter << PlayerClass << std::endl;
            break;
        case 'e':
            std::cout << PleaseEnter << OpponentName << std::endl;
            break;
        default:
            std::cerr << "That was an error. Sorry about that, try again.";
            break;
     }
}

//std::string OutputSys::out_

// END

// PUBLIC

const void OutputSys::out_MainMenu() {
    std::string MainMenu = "Main Menu";
    std::string MotlafQuest = "Motlaf Quest";
    std::cout << MotlafQuest << std::endl
              << MainMenu << std::endl
              << out_newGame() << std::endl
              << out_loadGame() << std::endl
              << out_showShortens() << std::endl
              << out_exitGame() << std::endl
              ;
}

// END

