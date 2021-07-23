TEMPLATE    = lib
TARGET      = graceful

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
    $$PWD/graceful.json

HEADERS += \
    $$PWD/graceful-platform-theme.h

SOURCES += \
    $$PWD/main.cpp                              \
    $$PWD/graceful-platform-theme.cpp           \


GRACEFUL_PLATFORM_THEME.files = $$OUT_PWD/libgraceful.so
GRACEFUL_PLATFORM_THEME.path = $$[QT_INSTALL_PLUGINS]/platformthemes


INSTALLS += GRACEFUL_PLATFORM_THEME
