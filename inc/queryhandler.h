#pragma once
#include <cctype>
#include "player.h"
#include "builders.h"
#include "inout.h"

class QueryHandler : public InOut {
public:
    //QueryHandler * createQueryHandler();
    static QueryHandler& Instance();
    
    //virtual ~QueryHandler();
    //void showMainMenuScript();
    std::shared_ptr<Player> startNewGameScript();
    void loadOldGameScript();
    void pauseMenuScript();
    void exitGameScript(void);
private:
    QueryHandler();
    QueryHandler(QueryHandler const&) = delete;
    QueryHandler& operator= (QueryHandler const&) = delete;
    ~QueryHandler();
};
