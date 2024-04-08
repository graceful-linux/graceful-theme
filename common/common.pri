VERSION             = 1.0.0
DEFINES             += VERSION='\\"$${VERSION}\\"'

GTK3_THEME_PATH     = /usr/share/themes/graceful-linux/
ICON_PATH           = /usr/share/icon/graceful-linux/
HOME =              $$system(echo $HOME)

INCLUDEPATH         += $$PWD

HEADERS             += \
    $$PWD/globals.h
