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

void QueryHandler::showMainMenuScript(){
    for (auto i=5; i>0; --i){
        OutputSys::out_MainMenu();
        switch(Input::inputGetAnswer()){ // заменить вывод строк на методы QueryHandler ("скрипты")
        case 1:

            startNewGameScript();
            i=0;
            break;
        case 2:
            std::cout << "Loading Game " << std::endl;
            // please, enter..
            break;
        case 3:
            std::cout << "Help " << std::endl;
            break;
        case 4:
            exitGameScript();
        default:
            std::cerr << "Can't understand you. "
            << "Try enter numbers 1-4. " << "You have " << i << " attempts left." << std::endl;
        continue;
       }
    }
}

void QueryHandler::startNewGameScript(){
    std::cout << "Starting New Game " << std::endl;
    char PlClass;
    OutputSys::out_pleaseEnter('p'); // input

    std::cout << "W means Warrior, R means Rogue, M means Mage. Choose your destiny!" << std::endl
                << "After choosing class, enter OK." << std::endl;

    std::cin >> /*std::tolower(*/PlClass;//,);
    // сделать проверку вводимых значений с помощью функции в Input, входными данными которой будут ожидаемые аргументы
    // если функция неуспешна, то попросить ввести заново, всего 3 попытки.
    Create create;
        create.playerBuilder(new WarriorBuilder);
        switch (PlClass) {
        case 'w':
            {create.constructPlayer(4,2,1);
            Player MotlafWarrior = create.getPlayer();
            MotlafWarrior.open();
            break;
            }
        case 'r':
            {create.constructPlayer(2,4,1);
            Player MotlafRogue = create.getPlayer();
            MotlafRogue.open();
            break;
            }
        case 'm':
            {create.constructPlayer(1,2,4);
            Player MotlafMage = create.getPlayer();
            MotlafMage.open();
            break;
            }
        default:
            std::cerr << "Can't understand you " << std::endl;
            break;
        }



        // при указании, что получилось, нужно указать класс, также записывая эту инфу в объект.
        //
        // return player object to continue work with it. Changes func signature.
}

