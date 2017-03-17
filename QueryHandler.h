#pragma once
#include <cctype>
#include "Log.h"
#include "Input.h"
#include "Output.h"

class QueryHandler : public OutputSys, public Input {
public:
    QueryHandler * createQueryHandler();
    virtual ~QueryHandler();
    //void showMainMenuScript();
    std::shared_ptr<Player> startNewGameScript();
    void loadOldGameScript();
    void pauseMenuScript();
    void exitGameScript(void);
private:
    QueryHandler();
};
