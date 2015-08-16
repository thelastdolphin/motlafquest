#include "Log.h"
using namespace std;

// писать в лог только при новом запуске файла, старые записи убирать.

void Log::Lcreate(std::string ClassName){
    std::string LogAddress = "Logs/" + ClassName + ".log";
    ofstream GameLog(LogAddress.c_str(), ios_base::out | ios_base::app);
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog << "Created " << ClassName << "\n" << Log::currentTime() << "\n";
}

void Log::Ldestroy(std::string ClassName) {
    std::string LogAddress = "Logs/" + ClassName + ".log";
    ofstream GameLog(LogAddress.c_str(), ios_base::out | ios_base::app);
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog << "Destroyed! " << ClassName << "\n" << Log::currentTime() << "\n";
}



char * Log::currentTime() {
    time_t RawTime;
    struct tm * CurTime;

    time(&RawTime);
    CurTime = localtime(&RawTime);
    return asctime(CurTime);
}
