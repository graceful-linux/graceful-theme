#ifndef GRACEFULSTYLEPLUGIN_H
#define GRACEFULSTYLEPLUGIN_H

#include <QStylePlugin>

class GracefulStylePlugin : public QStylePlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "graceful-style.json")
#endif
public:
    explicit GracefulStylePlugin(QObject *parent = nullptr);
    ~GracefulStylePlugin();

    QStyle* create(const QString &key) override;

Q_SIGNALS:

};

#endif // GRACEFULSTYLEPLUGIN_H
