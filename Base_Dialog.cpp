#include "Base_Dialog.h"

#include "Title_Bar.h"
#include "Skin.h"
#include "NcFramelessHelper.h"

Base_Dialog::Base_Dialog(QWidget *parent)
    : QDialog(parent)
    ,resizable_(true)
{
    layout_     = new QVBoxLayout(this);
    title_bar_  = new Title_Bar(this);
    title_bar_->set_show_style(Title_Bar::DIALOG_STYLE);

    layout_->addWidget(title_bar_, 0, Qt::AlignTop);
    layout_->setContentsMargins(0, 0, 0, 0);
    layout_->setSpacing(0);

    setContentsMargins(skin()->margin_left(), skin()->margin_top(), 
                       skin()->margin_right(), skin()->margin_bottom()
                      );
    setLayout(layout_);
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_OpaquePaintEvent);

    setStyleSheet(QString::fromLocal8Bit("*{font-size:11px; font-family:\"宋体\";}"));

    //通过边框拉动大小
    resize_helper = new NcFramelessHelper();
    resize_helper->activateOn(this);
}

Base_Dialog::~Base_Dialog()
{
    delete resize_helper;
}

void Base_Dialog::set_resizable( bool b )
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

bool Base_Dialog::isMaximized() const
{
    return title_bar_->is_window_maximized();
}

QString Base_Dialog::windowTitle() const
{
    return title_bar_->text();
}

void Base_Dialog::setWindowTitle( const QString &title )
{
    title_bar_->set_text(title);
}

void Base_Dialog::resizeEvent( QResizeEvent *e )
{
    if (isMaximized())
    {
        clearMask();
        return;
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
                            skin()->round_radius_x(), 
                            skin()->round_radius_y()
                            );

    //使用setmask过滤即可
    setMask(pixmap);
}

void Base_Dialog::paintEvent( QPaintEvent * )
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    QMargins margin(skin()->border_left(),
                    skin()->border_top(),
                    skin()->border_right(),
                    skin()->border_bottom()
                   );
    qDrawBorderPixmap(&painter, background_rect(), margin, skin()->background());
}
