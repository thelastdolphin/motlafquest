#include "Player.h"
#include "Castle.h"
#include "Input.h"
#include "Output.h"
#include "QueryHandler.h"

int main(void) {

    QueryHandler * MainGame = new QueryHandler;
    Player * Motlaf = Player::Instance();
    Castle * Sorrow = new Castle;
    Input * InEx = new Input;
    OutputSys * Out = new OutputSys;
    QueryHandler * QH = new QueryHandler;


    QH->startMainMenuScript();
    std::cout << InEx->inputGetOk();

    delete QH;
    delete Out;
    delete InEx;
    delete Sorrow;
    delete Motlaf;
    delete MainGame;
return 0;
}

