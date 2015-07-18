#ifndef LOG_H
#define LOG_H
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Log {
public:
    void Lcreate(std::string className);
    void Ldestroy(std::string className);
private:
    char * currentTime();
};

#endif
