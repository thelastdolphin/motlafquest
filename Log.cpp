#include "Log.h"
using namespace std;

// писать в лог только при новом запуске файла, старые записи убирать.

void Log::Lcreate(std::string className){
    ofstream GameLog("./gamelog", ios_base::out | ios_base::app);
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog << "Created " << className << Log::currentTime() << "\n";
}

void Log::Ldestroy(std::string className) {
    ofstream GameLog("./gamelog", ios_base::out | ios_base::app);
    if (!GameLog.is_open())
       std::cerr << "Can't open log!\n";
    else
       GameLog << "Destroyed! " << className << Log::currentTime() << "\n";
}



char * Log::currentTime() {
    time_t rawTime;
    struct tm * curTime;

    time(&rawTime);
    curTime =localtime(&rawTime);
    return asctime(curTime);
}
