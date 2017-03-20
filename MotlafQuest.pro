TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    inout.cpp \
    queryhandler.cpp \
    player.cpp \
    builders.cpp \
    log.cpp \
    castle.cpp \

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    inout.h \
    queryhandler.h \
    agreements.h \
    builders.h \
    player.h \
    log.h \
    castle.h \

DISTFILES +=

