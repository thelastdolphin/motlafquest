#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "Output.h"
#include "QueryHandler.h"
#include "Builders.h"
#include "Castle.h"

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
    MainGame.out_MainMenu();
    MainGame.inputGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame.startNewGameScript();
    // 2
    PlayerPtr->showPlayer(); // crashes in case of wrong letter
    MainGame.inputGetOk();
    // while (smth){
    // }; // 3-8


    std::cout << "Good-bye!" << std::endl;

    //delete Out;
    //delete InEx;
    //delete MainGame;
    
    return 0;
}

