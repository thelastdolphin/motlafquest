#pragma once
#include <cctype>
#include "Log.h"
#include "Input.h"
#include "Output.h"

class QueryHandler : public OutputSys, public Input {
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
