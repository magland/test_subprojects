#-------------------------------------------------
#
# Project created by QtCreator 2015-03-28T17:43:59
#
#-------------------------------------------------

QT       += core
QT       -= gui

OBJECTS_DIR = build
MOC_DIR = build
DESTDIR = ../../bin
TARGET = extractclips
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp extractclips.cpp

HEADERS += extractclips.h

INCLUDEPATH += ../../src
HEADERS += ../../src/mdaio.h
SOURCES += ../../src/mdaio.cpp
SOURCES += ../../src/usagetracking.cpp

INCLUDEPATH += ../common
HEADERS += ../common/get_command_line_params.h
SOURCES += ../common/get_command_line_params.cpp
