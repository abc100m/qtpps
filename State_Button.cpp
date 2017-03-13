#include "State_Button.h"

State_Button::State_Button(QWidget *parent)
	:QPushButton(parent)
    ,status_(NORMAL)
    ,mouse_pressed_(false)
{
    setStyleSheet("QPushButton{background:transparent;}");
}

State_Button::~State_Button()
{
}

void State_Button::load_pximap(const QString& pic_name, int state_count)
{
    pixmap_type_ = FOREGROUND;
    pixmap_.load(pic_name);
    state_count_ = state_count;
	width_       = pixmap_.width()/state_count;
	height_      = pixmap_.height();
	setFixedSize(width_, height_);
}

void State_Button::set_pixmap( const QPixmap& pixmap, int state_count )
{
    pixmap_type_ = FOREGROUND;
    pixmap_      = pixmap;
    state_count_ = state_count;
    width_       = pixmap_.width()/state_count;
    height_      = pixmap_.height();
    setFixedSize(width_, height_);
}

void State_Button::load_background( const QString& pic_name, int state_count/*=4*/ )
{
    load_pximap(pic_name, state_count);
    pixmap_type_ = BACKGROUND;
}

void State_Button::set_background( const QPixmap& pixmap, int state_count/*=4*/ )
{
    set_pixmap(pixmap, state_count);
    pixmap_type_ = BACKGROUND;
}

void State_Button::enterEvent(QEvent *)
{
	status_ = HOVER;
	update();
}

void State_Button::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton)
	{
		mouse_pressed_ = true;
		status_ = PRESSED;
		update();
	}

    QPushButton::mousePressEvent(event);
}

void State_Button::mouseReleaseEvent(QMouseEvent *event)
{
	if (mouse_pressed_)
	{
        mouse_pressed_ = false;
        
        if (this->rect().contains(event->pos()))
        {
            //if (isCheckable())
            //{
            //    setChecked(!isChecked());
            //}
            //emit clicked();

            status_ = HOVER;
        }else{
            status_ = NORMAL;
        }

        update();
	}

    QPushButton::mouseReleaseEvent(event);
}

void State_Button::leaveEvent(QEvent *)
{
	status_ = NORMAL;
	update();
}

void State_Button::paintEvent(QPaintEvent *e)
{
    if (pixmap_type_ == BACKGROUND)
    {
        paint_pixmap();
    }

    QPushButton::paintEvent(e);

    if (pixmap_type_ == FOREGROUND)
    {
        paint_pixmap();
    }
}

void State_Button::paint_pixmap() 
{
    QPainter painter(this);

    //根据状态显示图片
    ButtonStatus status = status_;
    if (!isEnabled())
    {
        status = DISABLED;
    }
    else if (isChecked())
    {
        status = CHECKED;
        //没有checked图片，用hover代替
        if (status >= state_count_)
        {
            status = HOVER;
        }
    }

    if (status >= state_count_)
    {
        status = NORMAL;
    }

    painter.drawPixmap(rect(), pixmap_.copy(width_ * status, 0, width_, height_));
}
