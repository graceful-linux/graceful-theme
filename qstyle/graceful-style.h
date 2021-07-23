#ifndef GRACEFULSTYLE_H
#define GRACEFULSTYLE_H

#include <QProxyStyle>

#if (QT_VERSION >= QT_VERSION_CHECK(5,12,0))
#include<private/qfusionstyle_p.h>
#define Style QCommonStyle
#else
#define Style QProxyStyle
#endif

class GracefulStyle : public Style
{
    Q_OBJECT
public:
    explicit GracefulStyle();
    ~GracefulStyle();

Q_SIGNALS:

};

#endif // GRACEFULSTYLE_H
