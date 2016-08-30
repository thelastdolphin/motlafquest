#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "output.h"
#include "QueryHandler.h"
#include "warrior.h"

int main(void) {

    QueryHandler * MainGame = new QueryHandler;
    Input * InEx = new Input;
    OutputSys * Out = new OutputSys;
    //Castle& instance = Castle::Instance();
    //QueryHandler * QH = new QueryHandler;
    MainGame->showMainMenuScript();
    InEx->inputGetOk();
    std::cout << "Good-bye!" << std::endl; // incapsulate this!
    //delete QH;
    delete Out;
    delete InEx;
    //delete Motlaf;
    delete MainGame;
return 0;
}

