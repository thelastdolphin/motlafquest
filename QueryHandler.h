#ifndef QUERYHANDLER_H
#define QUERYHANDLER_H
#include "Log.h"
#include "Input.h"
#include "output.h"

class QueryHandler : public OutputSys, public Input {
public:
    QueryHandler();  // TEMP
    virtual ~QueryHandler();
    void showMainMenuScript();
    void startNewGameScript();
    void loadOldGameScript();
    void pauseMenuScript();
    void exitGameScript(void);
};
#endif
