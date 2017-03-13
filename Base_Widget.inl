
#include "Title_Bar.h"
#include "Skin.h"
#include "NcFramelessHelper.h"

template<class T>
Base_Widget<T>::Base_Widget( QWidget* parent, Skin* skin )
    :T(parent)
    ,resize_temp_disabled(false)
    ,resizable_(true)
    ,skin_(skin)
{
    if (NULL == skin_)
    {
        skin_ = Skin::instance();
    }

    //通过边框拉动大小
    resize_helper = new NcFramelessHelper();
    resize_helper->activateOn(this);

    frame_layout_ = new QVBoxLayout();
    frame_layout_->setContentsMargins(0, 0, 0, 0);
    frame_layout_->setSpacing(0);

    layout_       = new QVBoxLayout();
    layout_->setContentsMargins(0, 0, 0, 0);
    layout_->setSpacing(0);

    title_bar_  = new Main_Title_Bar(this, skin_);
    title_bar_->set_show_style(Main_Title_Bar::MAIN_FORM_SKIN_STYLE);

    load_skin_internal();

    frame_layout_->addWidget(title_bar_, 0, Qt::AlignTop);
    frame_layout_->addLayout(layout_, 1);
    setLayout(frame_layout_);

    setWindowFlags( Qt::FramelessWindowHint); 
    setAttribute(Qt::WA_OpaquePaintEvent);
    //setAttribute(Qt::WA_TranslucentBackground);

    if (typeid(T) == typeid(QDialog))
    {
        setWindowFlags(windowFlags() | Qt::Dialog);
        title_bar_->set_show_style(Title_Bar::DIALOG_STYLE);
    }
}

template<class T>
Base_Widget<T>::~Base_Widget()
{
    delete resize_helper;
}

template<class T>
void Base_Widget<T>::resizeEvent( QResizeEvent * e)
{
    //最大化后无圆角,并禁止改变窗口大小
    if (isMaximized())
    {
        clearMask();
        if (resizable_)
        {
            resize_temp_disabled = true;
            resize_helper->setWidgetResizable(false);
            resize_helper->setWidgetMovable(false);
        }
        return;
    }

    //最大化后还复，允许改变窗口大小
    if (resizable_ && resize_temp_disabled)
    {
        resize_temp_disabled = false;
        resize_helper->setWidgetResizable(true);
        resize_helper->setWidgetMovable(true);
    }

    //圆角窗口
    //生成一张位图
    QBitmap pixmap(e->size());
    //QPainter用于在位图上绘画
    QPainter painter(&pixmap);
    // 圆角平滑
    painter.setRenderHints(QPainter::Antialiasing, true); 

    //填充位图矩形框(用白色填充)
    painter.fillRect(rect(), Qt::color0);
    painter.setBrush(Qt::color1);
    //在位图上画圆角矩形(用黑色填充)
    painter.drawRoundedRect(this->rect(), 
                            skin_->round_radius_x(),
                            skin_->round_radius_y()
                           );

    //使用setmask过滤即可
    setMask(pixmap);
}

template<class T>
void Base_Widget<T>::paintEvent( QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    const Border_Image& bi = skin_->background();
    qDrawBorderPixmap(&painter, background_rect(), bi.border(), bi.pixmap());

    //QPainterPath path;
    //path.setFillRule(Qt::WindingFill);
    //path.addRect(10, 10, this->width()-20, this->height()-20);

    //QPainter painter(this);
    //painter.setRenderHint(QPainter::Antialiasing, true);
    //painter.fillPath(path, QBrush(Qt::white));

    //QColor color(0, 0, 0, 50);
    //for(int i=0; i<10; i++)
    //{
    //    QPainterPath path;
    //    path.setFillRule(Qt::WindingFill);
    //    path.addRect(10-i, 10-i, this->width()-(10-i)*2, this->height()-(10-i)*2);
    //    color.setAlpha(150 - qSqrt(i)*50);
    //    painter.setPen(color);
    //    painter.drawPath(path);
    //}

}

template<class T>
bool Base_Widget<T>::isMaximized() const
{
    return title_bar_->is_window_maximized();
}

template<class T>
QString Base_Widget<T>::windowTitle() const
{
    return title_bar_->text();
}

template<class T>
void Base_Widget<T>::setWindowTitle( const QString & title)
{
    title_bar_->set_text(title);
}

template<class T>
void Base_Widget<T>::set_resizable( bool b )
{
    if (b == resizable_)
    {
        return;
    }

    if (resizable_)
    {
        resize_helper->removeFrom(this);
    }else{
        resize_helper->activateOn(this);
    }
    resizable_ = b;
}

template<class T>
void Base_Widget<T>::load_skin( Skin* skin/*=NULL*/ )
{
    if (NULL != skin)
    {
        skin = skin_;
    }

    title_bar_->load_skin(skin_);
    load_skin_internal();
}

template<class T>
void Base_Widget<T>::load_skin_internal()
{
    QMargins margin = skin_->background().margin();
    if (margin.top() > title_bar_->height())
    {
        margin.setTop(margin.top() - title_bar_->height());
    }else{
        margin.setTop(0);
    }

    layout_->setContentsMargins(margin);
    setStyleSheet(skin_->widget_qss());
}

