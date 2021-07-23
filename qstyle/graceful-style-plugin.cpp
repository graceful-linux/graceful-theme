#include "graceful-style-plugin.h"
#include "graceful-style.h"

#include <graceful/log.h>

GracefulStylePlugin::GracefulStylePlugin(QObject *parent) : QStylePlugin(parent)
{
    log_debug("graceful style is start ...");
}

QStyle *GracefulStylePlugin::create(const QString &key)
{
    Q_UNUSED(key)



    return new GracefulStyle();
}
