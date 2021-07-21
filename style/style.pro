TEMPLATE = aux

OTHER_FILES = \
    $$PWD/gtk-3.0/gtk.css

include($$PWD/../data/data.pri)
include($$PWD/../common/common.pri)

GTK_INDEX.files = \
    $$PWD/index.theme

GTK_INDEX.path = $$GTK3_THEME_PATH/

GTK_SETTINGS.path = /etc/gtk-3.0/

GTK_STYLE_ICON.path = $$GTK3_THEME_PATH/gtk-3.0

GTK_STYLES.files = $$PWD/gtk-3.0/gtk.css

GTK_STYLES.path = $$GTK3_THEME_PATH/gtk-3.0

GTK_POST_INSTALL.path = /etc/gtk-3.0/
unix:GTK_POST_INSTALL.extra = @rm -f $$HOME/.config/gtk-3.0/settings.ini                             \
                            ; ln -s /etc/gtk-3.0/settings.ini $$HOME/.config/gtk-3.0/settings.ini   \
                            ; echo -e "安装完成之后请注销并重新登录桌面环境"


INSTALLS += GTK_SETTINGS GTK_INDEX GTK_STYLE_ICON GTK_STYLES GTK_POST_INSTALL
