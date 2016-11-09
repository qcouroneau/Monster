TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++11
LIBS+=`sdl-config --libs` -lSDL_image -lSDL_ttf

INCLUDEPATH+=-I/usr/include/SDL/

SOURCES += main.cpp \
    fonctsdl.cpp \
    init.cpp \
    menu.cpp \
    monster.cpp \
    level.cpp \
    jeux.cpp

HEADERS += \
    fonctsdl.h \
    init.h \
    menu.h \
    monster.h \
    level.h \
    jeux.h

