#include "../inc/castle.h"

Room::Room(){}
Room::~Room(){}

Castle::Castle(int size): CastleSize(size) {
}

Castle::~Castle(){
}


Castle& Castle::Instance(int CastleSZ){
    static Castle Singleton(CastleSZ);
    return Singleton;
}

void Castle::showRooms(){
    std::vector<Room> Corridor(CastleSize);
    for (int i=0; i<CastleSize; i++){
		Corridor[i].number=i;
        std::cout << Corridor[i].number << " ";
    }
}

