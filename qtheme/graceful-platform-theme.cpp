#include "graceful-platform-theme.h"

#undef signals
#include <gtk/gtk.h>
#define signals Q_SIGNALS

#include <QIcon>
#include <QApplication>
#include <QStyleFactory>
#include <QGuiApplication>
#include <QWindowList>
#include <QWindow>
#include <QWidget>

#include <graceful/log.h>

#include "globals.h"

#if !defined(QT_NO_DBUS) && !defined(QT_NO_SYSTEMTRAYICON)
#include <private/qdbustrayicon_p.h>
#endif

GracefulPlatformTheme::GracefulPlatformTheme()
{
    log_debug("graceful platform theme is start ...");

    QIcon::setThemeSearchPaths(QIcon::themeSearchPaths() << "/usr/share/icons");
    if (QGSettings::isSchemaInstalled(GRACEFUL_SETTINGS_SCHEMA)) {
        mGsettings = new QGSettings(GRACEFUL_SETTINGS_SCHEMA, QByteArray(), this);
        connect(mGsettings, &QGSettings::changed, this, &GracefulPlatformTheme::onValueChanged);

        QString iconTheme = mGsettings->get(GRACEFUL_ICON_THEME).toString();
        QIcon::setThemeName(iconTheme);
        log_debug("set icon theme: %s", iconTheme.toUtf8().constData());
    } else {
        QIcon::setThemeName("Adwaita");
        // set gnome/mate/default values
    }

    /* Initialize some types here so that Gtk+ does not crash when reading
     * the treemodel for GtkFontChooser.
     */
    g_type_ensure(PANGO_TYPE_FONT_FAMILY);
    g_type_ensure(PANGO_TYPE_FONT_FACE);
}

GracefulPlatformTheme::~GracefulPlatformTheme()
{
    if(mGsettings)          delete mGsettings;
}

void GracefulPlatformTheme::onValueChanged(QString key)
{
    log_debug("qt plugin get gsetting's value '%s' changed!", key.toUtf8().constData());

    if (GRACEFUL_ICON_THEME == key) {
        QString iconTheme = mGsettings->get(key).toString();
        QIcon::setThemeName(iconTheme);
    }
}


