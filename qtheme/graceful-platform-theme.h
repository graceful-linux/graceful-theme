#ifndef GRACEFULPLATFORMTHEME_H
#define GRACEFULPLATFORMTHEME_H

#include <QFont>
#include <QVariant>
#include <QPalette>
#include <graceful/QGSettings>
#include <qpa/qplatformtheme.h>

class Q_DECL_EXPORT GracefulPlatformTheme : public QObject, public QPlatformTheme
{
    Q_OBJECT
public:
    explicit GracefulPlatformTheme();
    ~GracefulPlatformTheme();

#if !defined(QT_NO_DBUS) && !defined(QT_NO_SYSTEMTRAYICON)
//    virtual QPlatformSystemTrayIcon* createPlatformSystemTrayIcon() const Q_DECL_OVERRIDE;
#endif

private Q_SLOTS:
    void onValueChanged(QString);


private:
    QGSettings*             mGsettings = nullptr;
};

#endif // GRACEFULPLATFORMTHEME_H
