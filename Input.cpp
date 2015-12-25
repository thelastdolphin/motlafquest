#include "Input.h"

Input::Input(){
}

Input::~Input(){
}

int Input::inputGetOk() { // temp
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

unsigned int Input::inputGetAnswer() { // temp int version
    unsigned int chosenVariant;
    std::cin >> chosenVariant;
    return chosenVariant;
}
