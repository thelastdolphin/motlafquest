#include "Castle.h"

Castle::Castle(){
    Log * BuildCastleLog = new Log;
    std::string className = "Castle";
    BuildCastleLog->Lcreate(className);
    delete BuildCastleLog;
}

Castle::~Castle(){
    Log * BuildCastleLog = new Log;
    std::string className = "Castle";
    BuildCastleLog->Ldestroy(className);
    delete BuildCastleLog;
}

