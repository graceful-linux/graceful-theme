#include "graceful-proxy-style.h"

GracefulProxyStyle::GracefulProxyStyle() : QProxyStyle()
{

}

GracefulProxyStyle::~GracefulProxyStyle()
{

}

int GracefulProxyStyle::styleHint(StyleHint hint, const QStyleOption *option, const QWidget *widget, QStyleHintReturn *returnData) const
{
    if(hint == QStyle::SH_DialogButtonBox_ButtonsHaveIcons) {
        return 1;
    } else if(hint == QStyle::SH_ItemView_ActivateItemOnSingleClick) {
        return 1;
    } else if(hint == QStyle::SH_UnderlineShortcut) {
        return 0;
    }

    return QProxyStyle::styleHint(hint, option, widget, returnData);
}
