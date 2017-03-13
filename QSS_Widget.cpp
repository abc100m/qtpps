#include "QSS_Widget.h"
#include <QStyleOption>
#include <QPainter>

QSS_Widget::QSS_Widget( QWidget* parent /*= 0*/, Qt::WindowFlags f /*= 0*/ )
    :QWidget(parent, f)
{
}

void QSS_Widget::paintEvent( QPaintEvent * )
{
    QStyleOption opt;     
    opt.init(this); 
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this); 
}


