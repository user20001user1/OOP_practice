QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Apartment.cpp \
    HotelRoom.cpp \
    House.cpp \
    createapartment.cpp \
    createhotelroom.cpp \
    main.cpp \
    mainwindow.cpp \
    showapartment.cpp \
    showhotelroom.cpp

HEADERS += \
    ../../../../../Users/sanya/OneDrive/Рабочий стол/merge/Apartment.h \
    ../../../../../Users/sanya/OneDrive/Рабочий стол/merge/HotelRoom.h \
    ../../../../../Users/sanya/OneDrive/Рабочий стол/merge/House.h \
    Apartment.h \
    HotelRoom.h \
    House.h \
    createapartment.h \
    createhotelroom.h \
    mainwindow.h \
    showapartment.h \
    showhotelroom.h

FORMS += \
    createapartment.ui \
    createhotelroom.ui \
    mainwindow.ui \
    showapartment.ui \
    showhotelroom.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
