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
    //Castle CastleExmp = Castle::Instance();
    MainGame->out_MainMenu();
    InEx->inputGetAnswer();
    std::shared_ptr<Player> PlayerPtr = MainGame->startNewGameScript();
    PlayerPtr->showPlayer(); // crashes in case of wrong letter
    InEx->inputGetOk();
    std::cout << "Good-bye!" << std::endl; // incapsulate this!
    //delete CastleExmp;
    delete Out; // incapsulate this too
    delete InEx;
    delete MainGame;
    return 0;
}

