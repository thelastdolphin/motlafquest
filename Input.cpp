#include "Input.h"

std::string Input::inputMainEnemyName(){
    std::string Opponent;// при добавлении класса противников указать, что это поле объекта
    std::cout << "Please enter name of your enemy: ";
    std::cin >> Opponent;
    return Opponent;
}

std::string Input::inputPlayerClass(Player MainPlayer){
    std::string PlayerClass;// аналогично Opponent.
    std::cout << "Please, enter name of your chosen class: ";
    std::cin >> PlayerClass;
    return PlayerClass;
}

// написать функцию в класс Output для вывода сообщений вида "Please enter .."
