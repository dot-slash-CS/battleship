TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ship.cpp \
    point.cpp \
    player.cpp

HEADERS += \
    ship.h \
    point.h \
    player.h
