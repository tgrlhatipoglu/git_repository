#-------------------------------------------------
#
# Project created by QtCreator 2020-01-16T13:30:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDialogButton
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11


SOURCES += main.cpp\
        widget.cpp \
    infodialog.cpp

HEADERS  += widget.h \
    infodialog.h

FORMS    += widget.ui \
    infodialog.ui
