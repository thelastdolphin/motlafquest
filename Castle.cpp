#include "Castle.h"

Castle::Castle(int size): CastleSize(size) {
    /*
    Log * BuildCastleLog = new Log;
    std::string ClassName = "Castle";
    BuildCastleLog->Lcreate(ClassName);
    delete BuildCastleLog;
    */
}

Castle::~Castle(){
    /*
    Log * DestroyCastleLog = new Log;
    std::string ClassName = "Castle";
    DestroyCastleLog->Ldestroy(ClassName);
    delete DestroyCastleLog;
    */
}


Castle& Castle::Instance(){
    static Castle Singleton(0);
    return Singleton;
}

//Получить ссылку на синглтон для работы с ним:


//Castle::Castle() {
//    std::vector<Room> CastleQueue(10);
//}


