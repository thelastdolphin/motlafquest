#include "Player.h"
#include "Castle.h"
#include "Output.h"
#include "QueryHandler.h"

int main(void) {

    QueryHandler * MainGame = new QueryHandler;
    Player * Motlaf = new Player;
    Castle * Sorrow = new Castle;
    OutputSys * Out = new OutputSys;
    QueryHandler * QH = new QueryHandler;

    QH->startMainMenuScript();
    //Out->out_MainMenu();

    delete QH;
    delete Out;
    delete Sorrow;
    delete Motlaf;
    delete MainGame;
return 0;
}

