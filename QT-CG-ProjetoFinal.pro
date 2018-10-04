QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT-CG-ProjetoFinal
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    viewportwidget.cpp

HEADERS += \
    mainwindow.h \
    viewportwidget.h \
    Vec3.h \
    vec4.h

FORMS += \
    mainwindow.ui

#LINUX
LIBS += -lglut -lGLU
