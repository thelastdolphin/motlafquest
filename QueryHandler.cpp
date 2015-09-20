#include "QueryHandler.h"

QueryHandler::QueryHandler(){

}
QueryHandler::~QueryHandler(){

}

void QueryHandler::startMainMenuScript(){
    OutputSys::out_MainMenu();
    switch(Input::inputGetAnswer()){ // заменить вывод строк на методы QueryHandler ("скрипты")
    case 1:

        startNewGameScript();
        break;
    case 2:
        std::cout << "Loading Game ";
        break;
    case 3:
        std::cout << "Help " << std::endl;
        break;
    case 4:
        std::cout << "Exiting ";
        std::exit(0);
    default:
        std::cerr << "Can't understand you ";
    }

}

void QueryHandler::startNewGameScript(){
    std::cout << "Starting New Game " << std::endl;
    OutputSys::out_pleaseEnter('p');
}
