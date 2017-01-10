#pragma once
#include "Log.h"
#include "Input.h"
#include "output.h"

class QueryHandler : public OutputSys, public Input {
public:
    QueryHandler();  // TEMP
    virtual ~QueryHandler();
    //void showMainMenuScript();
    std::shared_ptr<Player> startNewGameScript();
    void loadOldGameScript();
    void pauseMenuScript();
    void exitGameScript(void);
};
