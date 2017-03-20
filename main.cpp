#include "player.h"
#include "castle.h"
#include "inout.h"
#include "queryhandler.h"
#include "builders.h"
#include "castle.h"

/* 1.Создание персонажа
 * 2.Отображение стартовых параметров
 * 3.Первая комната замка
 * 4.Описание этого факта
 * 5.Первое сражение (встреча с монстром)
 * 6.Победа над монстром
 * 7.Получение награды
 * 8.Отображение награды, затем - изменившихся под её воздействием параметров
 * 3-8 - cycled
 * */


int main(void) {
    // 0
    QueryHandler&  MainGame = QueryHandler::Instance();
    //Input * InEx = InEx->execInputSys();
    //OutputSys * Out = Out->execOutputSys();
    Castle &CastleExmp = Castle::Instance(10); // no need in deleting, Singleton pattern
    // 1
    MainGame.ioMainMenu();
    MainGame.ioGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame.startNewGameScript();
    // 2
    PlayerPtr->showPlayer(); // crashes in case of wrong letter
    MainGame.ioGetOk();
    // while (smth){
    // }; // 3-8


    std::cout << "Good-bye!" << std::endl;

    //delete Out;
    //delete InEx;
    //delete MainGame;
    
    return 0;
}

