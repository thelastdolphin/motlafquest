#include "Player.h"
/*#include "Castle.h"
#include "Input.h"
#include "Output.h"
#include "QueryHandler.h"*/
#include "warrior.h"

int main(void) {

    /*QueryHandler * MainGame = new QueryHandler;
    Player * Motlaf = Player::Instance();
    //Castle * Sorrow = new Castle;
    Input * InEx = new Input;
    OutputSys * Out = new OutputSys;
    //QueryHandler * QH = new QueryHandler;


    MainGame->startMainMenuScript();
    std::cout << InEx->inputGetOk();

    //delete QH;
    delete Out;
    delete InEx;
    //delete Sorrow;
    delete Motlaf;
    delete MainGame;*/

    Create create;
    create.playerBuilder(new WarriorBuilder);
    create.constructPlayer();

    Player Motlaf = create.getPlayer();
    Motlaf.open();
return 0;
}

