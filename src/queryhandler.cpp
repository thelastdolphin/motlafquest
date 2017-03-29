#include "../inc/queryhandler.h"

QueryHandler::QueryHandler(){
    //Input * InEx = InEx->execInputSys();
    //OutputSys * Out = Out->execOutputSys();
}
QueryHandler::~QueryHandler(){

}

//QueryHandler * QueryHandler::createQueryHandler(){
//    return new QueryHandler();
//}

QueryHandler& QueryHandler::Instance(){
    static QueryHandler Singleton;
    return Singleton;
}

void QueryHandler::exitGameScript(void){
    std::cout << "Exiting " << std::endl;
    std::exit(0);
}
/*
void QueryHandler::showMainMenuScript(){
    for (auto i=5; i>0; --i){
        OutputSys::out_MainMenu();
        switch(Input::inputGetAnswer()){ // заменить вывод строк на методы QueryHandler ("скрипты")
        case 1:
            std::shared_ptr<Player> PlayerPtr = startNewGameScript();
            PlayerPtr->showPlayer();
            i=0;
            return PlayerPtr;
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
*/

std::shared_ptr<Player> QueryHandler::startNewGameScript(){ //заставить возвращать сконструированный объект игрока
    std::cout << "Starting New Game " << std::endl;
    char PlClass;
    InOut::ioPleaseEnter('p'); // input

    std::cout << "W means Warrior, R means Rogue, M means Mage. Choose your destiny!" << std::endl
                << "After choosing class, enter OK." << std::endl;

    std::cin >> PlClass;
    PlClass=tolower(PlClass);
    // сделать проверку вводимых значений с помощью функции в Input, входными данными которой будут ожидаемые аргументы
    // если функция неуспешна, то попросить ввести заново, всего 3 попытки.
    Create create;
    std::shared_ptr<Player> PlayerPtr;
    switch (PlClass) {
        case 'w':
            {
            WarriorBuilder WB;
            create.setPlayerBuilder(&WB);
            create.constructPlayer();
            PlayerPtr = create.getPlayer();
            break;
            }
        case 'r':
            {
            RogueBuilder RB;
            create.setPlayerBuilder(&RB);
            create.constructPlayer();
            PlayerPtr = create.getPlayer();
            break;
            }
        case 'm':
            {
            MageBuilder MB;
            create.setPlayerBuilder(&MB);
            create.constructPlayer();
            PlayerPtr = create.getPlayer();
            break;
            }
        default:
            std::cerr << "Can't understand you " << std::endl; // убрать это дерьмо и сделать приличную обработку значений
    }
        // при указании, что получилось, нужно указать класс, также записывая эту инфу в объект.
        //
        // return player object to continue work with it. Changes func signature.
    return PlayerPtr;
}

