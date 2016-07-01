#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "output.h"
#include "QueryHandler.h"
#include "warrior.h"

int main(void) {

    QueryHandler * MainGame = new QueryHandler;
    //Player * Motlaf = Player::Instance();
    //Castle * Sorrow = new Castle;
    Input * InEx = new Input;
    OutputSys * Out = new OutputSys;
    //QueryHandler * QH = new QueryHandler;


    MainGame->showMainMenuScript();
    InEx->inputGetOk();
    std::cout << "Good-bye!" << std::endl; // incapsulate this!
    //delete QH;
    delete Out;
    delete InEx;
    //delete Sorrow;
    //delete Motlaf;
    delete MainGame;
return 0;
}

