#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "output.h"
#include "QueryHandler.h"
#include "Builders.h"

int main(void) {

    QueryHandler * MainGame = new QueryHandler;
    Input * InEx = new Input;
    OutputSys * Out = new OutputSys;
    MainGame->out_MainMenu();
    InEx->inputGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame->startNewGameScript();
    PlayerPtr->showPlayer();
    InEx->inputGetOk();
    std::cout << "Good-bye!" << std::endl; // incapsulate this!
    //delete QH;
    delete Out;
    delete InEx;
    //delete Motlaf;
    delete MainGame;
return 0;
}

