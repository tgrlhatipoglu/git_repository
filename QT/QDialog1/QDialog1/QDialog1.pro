#-------------------------------------------------
#
# Project created by QtCreator 2020-01-15T10:36:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDialog1
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11


SOURCES += main.cpp\
        widget.cpp \
    infodialog.cpp

HEADERS  += widget.h \
    infodialog.h

FORMS    += widget.ui \
    infodialog.ui
