#include "../inc/castle.h"
#include "../inc/player.h"
#include "../inc/builders.h"
#include "../inc/inout.h"
#include "../inc/queryhandler.h"



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
    Castle &CastleExmp = Castle::Instance(10); 
    // 1
    MainGame.ioMainMenu();
    MainGame.ioGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame.startNewGameScript();
    // 2
    PlayerPtr->showPlayer(); // crashes in case of wrong letter
    CastleExmp.showRooms();
    MainGame.ioGetOk();
    // while (smth){
    // }; // 3-8


    std::cout << "Good-bye!" << std::endl;

    return 0;
}
