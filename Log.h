#ifndef LOG_H
#define LOG_H
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Log {
public:
    Log();
    ~Log();
    void Lcreate(std::string ClassName);
    void Ldestroy(std::string ClassName);
private:
    const char * currentTime() noexcept;

};

#endif
