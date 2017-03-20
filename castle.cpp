#include "castle.h"

Room::Room(){}
Room::~Room(){}

Castle::Castle(int size): CastleSize(size) {
}

Castle::~Castle(){
    /*
    Log * DestroyCastleLog = new Log;
    std::string ClassName = "Castle";
    DestroyCastleLog->Ldestroy(ClassName);
    delete DestroyCastleLog;
    */
}


Castle& Castle::Instance(int CastleSZ){
    static Castle Singleton(CastleSZ);
    return Singleton;
}

void Castle::showRooms(){
    std::vector<Room> Corridor(CastleSize);
    for (int i=0; i<CastleSize; i++){
        std::cout << Corridor[i].number << std::endl;
    }
}

