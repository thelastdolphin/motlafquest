#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "Output.h"
#include "QueryHandler.h"
#include "Builders.h"
#include "Castle.h"

int main(void) {

    QueryHandler * MainGame = MainGame->createQueryHandler();
    Input * InEx = InEx->execInputSys();
    OutputSys * Out = Out->execOutputSys();
    Castle &CastleExmp = Castle::Instance(); // no need in deleting, Singleton pattern
    
    MainGame->out_MainMenu();
    InEx->inputGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame->startNewGameScript();
    PlayerPtr->showPlayer(); // crashes in case of wrong letter
    InEx->inputGetOk();
    std::cout << "Good-bye!" << std::endl;

    delete Out; 
    delete InEx;
    delete MainGame;
    
    return 0;
}

