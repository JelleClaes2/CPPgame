QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        burger.cpp \
        cupido.cpp \
        dief.cpp \
        heks.cpp \
        jager.cpp \
        main.cpp \
        spel.cpp \
        speler.cpp \
        weerwolf.cpp \
        ziener.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    burger.h \
    cupido.h \
    dief.h \
    heks.h \
    jager.h \
    rollen.h \
    spel.h \
    speler.h \
    weerwolf.h \
    ziener.h
