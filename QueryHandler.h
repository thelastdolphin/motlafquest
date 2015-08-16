#ifndef QUERYHANDLER_H
#define QUERYHANDLER_H
#include "Log.h"
#include "Input.h"
#include "Output.h"

class QueryHandler {
public:
    QueryHandler();  // TEMP
    ~QueryHandler();
    void startMainMenuScript();
    void startNewGameScript();
    void loadOldGameScript();
    void pauseMenuScript();
    void exitGameScript();
};
#endif
