TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Castle.cpp \
    Log.cpp \
    Player.cpp \
    Input.cpp \
    Output.cpp \
    QueryHandler.cpp \
    warrior.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Castle.h \
    Log.h \
    Player.h \
    Input.h \
    output.h \
    QueryHandler.h \
    agreements.h \
    warrior.h \
    output.h

DISTFILES +=

