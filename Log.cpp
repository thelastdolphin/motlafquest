#include "Log.h"

// переписать лог так, чтобы файл открывался один раз,
// и туда записывалось всё по порядку.

void Log::Lcreate(std::string className){ // записывает в файл создание экземпляра класса игрока, время и вид
    /*std::ofstream GameLog("./gamelog");
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog */ std::cout << "Created" << className << "\n";
};

void Log::Ldestroy(std::string className) {
    /*std::ofstream GameLog("./gamelog");
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog */ std::cout << "Destroyed!" << className << "\n";
};
