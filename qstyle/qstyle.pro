TEMPLATE    = lib
TARGET      = graceful-style

QT          += widgets dbus gui-private widgets-private x11extras
greaterThan(QT_MAJOR_VERSION, 5)|greaterThan(QT_MINOR_VERSION, 7): \
    QT      += theme_support-private
else: \
    QT      += platformsupport-private

CONFIG      += plugin c++11 link_pkgconfig no_keywords
PKGCONFIG   += graceful gtk+-3.0
DEFINES     += QT_DEPRECATED_WARNINGS

include($$PWD/../common/common.pri)

DISTFILES   += \
    $$PWD/graceful-style.json

HEADERS += \
    graceful-proxy-style.h \
    graceful-style-plugin.h \
    graceful-style.h

SOURCES += \
    graceful-proxy-style.cpp \
    graceful-style-plugin.cpp \
    graceful-style.cpp


GRACEFUL_STYLE.files = $$OUT_PWD/libgraceful-style.so
GRACEFUL_STYLE.path = $$[QT_INSTALL_PLUGINS]/styles


INSTALLS += GRACEFUL_STYLE
