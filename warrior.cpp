#include "warrior.h"
#include "QueryHandler.h"
/*void WarriorBuilder::buildStrength(void) {
    player_.strength(10);
}

void WarriorBuilder::buildAgility(void){
    player_.agility(7);
}

void WarriorBuilder::buildMind(void){
    player_.mind(3);
}


KingBuilder::BuildTargetClass(){
    int TargetClass = 0;
    std::string TClass = "";
    std::cin >> TClass;
    std::transform(TClass.begin(), TClass.end(), TClass.begin(), ::tolower());
    if (TClass == "warrior") {
    KingBuilder::buildStrength();
    KingBuilder::buildAgility();
    KingBuilder::buildMind();


    /*    player_.strength(10);
        player_.agility(7);
        player_.mind(3);
    }; вызвать метод, устанавливающий параметры по-своему, для каждого класса
}
*/
void KingBuilder::buildStrength(void) {
    player_.strength(10);
}

void KingBuilder::buildAgility(void){
    player_.agility(7);
}

void KingBuilder::buildMind(void){
    player_.mind(3);
}
