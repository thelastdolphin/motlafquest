#ifndef LOG_H
#define LOG_H
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Log {
public:
    void Lcreate(std::string ClassName);
    void Ldestroy(std::string ClassName);
private:
    char * currentTime();
};

#endif
