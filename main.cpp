#include <iostream>
#include "Player.h"
#include "Castle.h"
int main(void)
{

    Player * Motlaf = new Player;
    Castle * Sorrow = new Castle;
    std::cout << "MOTLAF QUEST\n" << std::endl;
    delete Sorrow;
    delete Motlaf;
    return 0;
}

