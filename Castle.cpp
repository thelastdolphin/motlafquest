#include "Castle.h"

Castle::Castle(){
    Log * BuildCastleLog = new Log;
    std::string ClassName = "Castle";
    BuildCastleLog->Lcreate(ClassName);
    delete BuildCastleLog;
}

Castle::~Castle(){
    Log * DestroyCastleLog = new Log;
    std::string ClassName = "Castle";
    DestroyCastleLog->Ldestroy(ClassName);
    delete DestroyCastleLog;
}

//Castle::Room(){

//}

//Castle::~Room(){

//}
