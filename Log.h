#ifndef LOG_H
#define LOG_H
#include <fstream>
#include <iostream>
#include <string>

class Log {
public:
    void Lcreate(std::string className);
    void Ldestroy(std::string className);
};

#endif
