#include "Button_Bar.h"

#include <QSignalMapper>

//功能：将toolbutton的按下时图和文字向下偏移1px的效果去除
class MyProxyStyle : public QProxyStyle
{
public:
    int pixelMetric(PixelMetric metric, const QStyleOption *option = 0, const QWidget *widget = 0) const
    {
        int ret = 0;
        switch (metric) 
        {
            case QStyle::PM_ButtonShiftHorizontal:
            case QStyle::PM_ButtonShiftVertical:
                ret = 0;
                break;
            default:
                ret = QProxyStyle::pixelMetric(metric, option, widget);
                break;
        }
        return ret;
    }
};

Button_Bar::Button_Bar(QWidget *parent)
    : QWidget(parent)
{
    hbox_layout_ = new QHBoxLayout();
    hbox_layout_->setContentsMargins(5, 0, 0, 5);
    hbox_layout_->setSpacing(3);

    button_qss_  =
"QToolButton:checked{background:qradialgradient(cx: 0.5, cy: 0,fx: 0.5, fy: -0.1,radius: 0.4, stop: 0 #BFD2DE, stop: 0.3 #8CAFC4 stop: 1 #5F8DAB);border-radius:2px;border:1px solid #6F95AE;}"
"QToolButton:hover:!checked{background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #BFD2DE, stop: 0.5 #8CAFC4, stop: 1.0 #5F8DAB);border-radius:2px;border:1px solid #6F95AE;}"
"QToolButton{background:transparent; border:1px solid QColor(0,0,0,0);border-radius:2px;}"
                     ;
    //        "QToolButton:hover:!checked{"
    //        "  border-style: outset; border-image: url(:/images/buttonbar/select_border.png) 3; border-width:3;color:red; font-weight:bold;}"

//
    signal_mapper_ = new QSignalMapper(this);
    connect(signal_mapper_, SIGNAL(mapped(int)), this, SIGNAL(button_clicked(int)) );

    setLayout(hbox_layout_);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
}

Button_Bar::~Button_Bar()
{
}

void Button_Bar::add_space(int size)
{
    hbox_layout_->addSpacing(size);
}

void Button_Bar::add_stretch(int stretch)
{
    hbox_layout_->addStretch(stretch);
}

void Button_Bar::add_widget( QWidget *w, int stretch /*= 0*/, Qt::Alignment alignment /*= 0*/ )
{
    hbox_layout_->addWidget(w, stretch, alignment);
}

QToolButton* Button_Bar::at( quint32 i )
{
    if (i >= button_list_.size())
    {
        return NULL;
    }
    return button_list_[i];
}

void Button_Bar::add( const QPixmap& pixmap, const QString& text, 
                     const QString& object_name/*=""*/, const QString& qss/*="" */ )
{
    QToolButton* btn = new QToolButton(this);
    btn->setStyle(new MyProxyStyle());

    btn->setIcon(pixmap);
    btn->setIconSize(pixmap.size());
    btn->setText(text);
    btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    btn->setCheckable(true);
    btn->setAutoExclusive(true);
    btn->setAutoRaise(true);

    //object name
    if (!object_name.isEmpty())
    {
        btn->setObjectName(object_name);
    }else{
        QString name = QString("button_bar_%1").arg(button_list_.size());
        btn->setObjectName(name);
    }

    //button qss
    if (!qss.isEmpty())
    {
        btn->setStyleSheet(qss);
    }else{
        btn->setStyleSheet(button_qss_);
    }

    btn->setFixedSize(pixmap.width() + 25, 
                      pixmap.height() + 25/*btn->fontMetrics().height() + 20*/
                     );

    hbox_layout_->addWidget(btn, 0, Qt::AlignVCenter);
    signal_mapper_->setMapping(btn, button_list_.size());
    button_list_.push_back(btn);
    connect(btn, SIGNAL(clicked()), signal_mapper_, SLOT(map()));
}

void Button_Bar::add( const QString& image_path, const QString& text, 
                     const QString& object_name/*=""*/, const QString& qss/*="" */ )
{
    QPixmap pixmap(image_path);
    add(pixmap, text, object_name, qss);
}

void Button_Bar::clear()
{
    foreach(QWidget*btn, button_list_)
    {
        delete btn;
    }
    button_list_.clear();
}

void Button_Bar::set_button_qss( const QString& str, bool set_to_button/*=false*/ )
{
    button_qss_ = str;
    if (set_to_button)
    {
        foreach(QWidget*btn, button_list_)
        {
            btn->setStyleSheet(str);
        }
    }
}

int Button_Bar::count() const
{
    return button_list_.size();
}

