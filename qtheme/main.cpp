#include <qpa/qplatformthemeplugin.h>

#include "graceful-platform-theme.h"

QT_BEGIN_NAMESPACE

class GracefulPlatformThemePlugin : public QPlatformThemePlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformThemeFactoryInterface_iid FILE "graceful.json")

public:
    virtual QPlatformTheme* create(const QString &key, const QStringList& paramList) override
    {
        if (key.toLower() == "graceful") {
            return new GracefulPlatformTheme();
        }

        return nullptr;
        Q_UNUSED(paramList)
    }
};

QT_END_NAMESPACE

#include "main.moc"
