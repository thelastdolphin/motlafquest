#include "inout.h"

InOut::InOut(){

}
InOut::~InOut(){

}

int InOut::ioGetOk() { // temp
    std::string OkEntered;
    std::string OkTemplate = "ok";
    std::cin >> OkEntered;
    std::transform(OkEntered.begin(), OkEntered.end(), OkEntered.begin(), ::tolower);
    int resultOfCompare = 0;
    if (resultOfCompare == OkTemplate.compare(OkEntered))
        return resultOfCompare;
    else {
        std::cerr << "Incorrect input. Try typing \"OK\"\n";
        return -1;
    }
}

unsigned int InOut::ioGetAnswer() { // temp int version
    unsigned int chosenVariant;
    std::cin >> chosenVariant;
    while (std::cin.fail()){
        std::cout << "Please, input 1-4 numbers:" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >>  chosenVariant;
    };
    return chosenVariant;
}

const std::string InOut::ioNewGame() noexcept {
    std::string NewGame = "Start New Game";
    return NewGame;
}

const std::string InOut::ioSaveGame() noexcept {
    std::string SaveGame = "Save Game";
    return SaveGame;
}

const std::string InOut::ioLoadGame() noexcept {
    std::string LoadGame = "Load Game";
    return LoadGame;
}

const std::string InOut::ioShowShortens() noexcept { // здесь нужно
    std::string Shortens = "Shortens: ";
    return Shortens;
}

const std::string InOut::ioExitGame() noexcept {
    std::string ExitGame = "Exit Game";
    return ExitGame;
}

void InOut::ioPleaseEnter(char chosenVariant) noexcept{
    std::string PleaseEnter = "Please, enter ";
    std::string PlayerClass = "player class: ";
    std::string OpponentName = "name of your bitter enemy: ";

    switch (chosenVariant) {
        case 'p':
            std::cout << PleaseEnter << PlayerClass << std::endl;
            break;
        case 'e':
            std::cout << PleaseEnter << OpponentName << std::endl;
            break;
        default:
            std::cerr << "That was an error. Sorry about that, try again.";
            break;
     }
}

void InOut::ioMainMenu() noexcept {
    std::string MainMenu = "Main Menu";
    std::string MotlafQuest = "Motlaf Quest";
    std::cout << MotlafQuest << std::endl
              << MainMenu << std::endl
              << ioNewGame() << std::endl
              << ioLoadGame() << std::endl
              << ioShowShortens() << std::endl
              << ioExitGame() << std::endl
              ;
}
