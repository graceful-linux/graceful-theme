#include "graceful-style.h"

#include <QVariant>
#include <QScrollBar>
#include <QApplication>
#include <QAbstractScrollArea>

#include <graceful/log.h>

GracefulStyle::GracefulStyle() : QCommonStyle(*new GracefulStylePrivate)
{

}

GracefulStyle::~GracefulStyle()
{

}

QColor GracefulStylePrivate::outline(const QPalette &pal) const
{
    if (pal.window().style() == Qt::TexturePattern) {
        return QColor(0, 0, 0, 160);
    }

    return pal.window().color().darker(140);
}

QColor GracefulStylePrivate::buttonColor(const QPalette &pal) const
{
    QColor buttonColor = pal.button().color();
    int val = qGray(buttonColor.rgb());

    buttonColor = buttonColor.lighter(100 + qMax(1, (180 - val) / 6));
    buttonColor.setHsv(buttonColor.hue(), buttonColor.saturation() * 0.75, buttonColor.value());

    return buttonColor;
}

QColor GracefulStylePrivate::highlight(const QPalette &pal) const
{
    return pal.color(QPalette::Highlight);
}

QColor GracefulStylePrivate::highlightedOutline(const QPalette &pal) const
{
    QColor highlightedOutline = highlight(pal).darker(125);

    if (highlightedOutline.value() > 160) {
        highlightedOutline.setHsl(highlightedOutline.hue(), highlightedOutline.saturation(), 160);
    }

    return highlightedOutline;
}

QColor GracefulStylePrivate::backgroundColor(const QPalette &pal, const QWidget *widget) const
{
    if (qobject_cast<const QScrollBar *>(widget) && widget->parent()
        && qobject_cast<const QAbstractScrollArea *>(widget->parent()->parent())) {
        return widget->parentWidget()->parentWidget()->palette().color(QPalette::Base);
    }

    return pal.color(QPalette::Base);
}

QColor GracefulStylePrivate::innerContrastLine() const
{
    return QColor(255, 255, 255, 30);
}

//void GracefulStylePrivate::_q_updateAppFont()
//{
//    if (qApp->desktopSettingsAware()) {
//        qApp->setFont(QGuiApplication::font());

//        for (QWidget *w : qApp->allWidgets()) {
//            if (!w->isWindow() && w->testAttribute(Qt::WA_StyleSheet)) {
//                QEvent e(QEvent::ApplicationFontChange);
//                qApp->sendEvent(w, &e);
//            }
//        }
//    }
//}

QColor GracefulStylePrivate::lightShade() const
{
    return QColor(255, 255, 255, 90);
}

QColor GracefulStylePrivate::darkShade() const
{
    return QColor(0, 0, 0, 60);
}
