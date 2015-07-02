TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Castle.cpp \
    Log.cpp \
    Player.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    Castle.h \
    Log.h \
    Player.h

DISTFILES +=

