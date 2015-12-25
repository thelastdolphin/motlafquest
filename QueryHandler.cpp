#include "QueryHandler.h"
#include "Player.h"
#include "warrior.h"

QueryHandler::QueryHandler(){

}
QueryHandler::~QueryHandler(){

}


void QueryHandler::exitGameScript(void){
    std::cout << "Exiting " << std::endl;
    std::exit(0);
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
        exitGameScript();
    default:
        std::cerr << "Can't understand you ";
    }

}

void QueryHandler::startNewGameScript(){
    std::cout << "Starting New Game " << std::endl;
    char PlClass;
    OutputSys::out_pleaseEnter('p');
    // input
    std::cin >> PlClass;
    Create create;
        create.playerBuilder(new KingBuilder);
        switch (PlClass) {
        case 'w':
              create.constructPlayer(4,2,1);
              break;
        case 'r':
                create.constructPlayer(2,4,1);
                break;
        case 'm':
            create.constructPlayer(1,2,4);
            break;
        default:
            std::cerr << "Can't understand you ";
        }


        Player Motlaf = create.getPlayer();
        Motlaf.open();
}

