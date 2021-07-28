#ifndef GRACEFULPROXYSTYLE_H
#define GRACEFULPROXYSTYLE_H

#include <QProxyStyle>

class GracefulProxyStyle : public QProxyStyle
{
    Q_OBJECT
public:
    explicit GracefulProxyStyle();
    virtual ~GracefulProxyStyle();

    int styleHint(StyleHint hint, const QStyleOption *option, const QWidget *widget, QStyleHintReturn *returnData) const override;
};

#endif // GRACEFULPROXYSTYLE_H
