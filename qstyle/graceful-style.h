#ifndef GRACEFULSTYLE_H
#define GRACEFULSTYLE_H

#undef slots
#define slots Q_SLOTS

#include <QCommonStyle>
#include <private/qcommonstyle_p.h>

class GracefulStylePrivate;
class GracefulStyle : public QCommonStyle
{
    Q_OBJECT
public:
    explicit GracefulStyle();
    ~GracefulStyle();

    void polish(QPalette &p) Q_DECL_OVERRIDE;

Q_SIGNALS:

private:
//    Q_PRIVATE_SLOT(d_func(), void _q_updateAppFont())

};

class GracefulStylePrivate : public QCommonStylePrivate
{
public:
    QColor outline(const QPalette &pal) const;
    QColor buttonColor(const QPalette &pal) const;
    QColor highlight(const QPalette &pal) const;
    QColor highlightedOutline(const QPalette &pal) const;
    QColor backgroundColor(const QPalette &pal, const QWidget* widget) const;

    inline QColor darkShade() const;
    inline QColor lightShade() const;
    inline QColor innerContrastLine() const;

//    void _q_updateAppFont();

    Q_DECLARE_PUBLIC(GracefulStyle)
};

#endif // GRACEFULSTYLE_H
