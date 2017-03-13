#include "Skin.h"
#include <QTextStream>

QScopedPointer<Skin> Skin::s_instance(0);

Skin* Skin::instance()
{
    //注意这里不是线程安全的
    if (s_instance.isNull())
    {
       s_instance.reset(new Skin());
       s_instance->load();
    }
    return s_instance.data();
}

void Skin::instance( Skin* i )
{
    s_instance.reset(i);
}

Skin::Skin()
{
}

Skin::~Skin()
{
}

void Skin::load()
{
    app_pixmap_.load(":/images/titlebar/icon.png");
    min_pixmap_.load(":/images/titlebar/min.png");
    max_pixmap_.load(":/images/titlebar/max.png");
    restore_pixmap_.load(":/images/titlebar/restore.png");
    close_pixmap_.load(":/images/titlebar/close.png");
    skin_pixmap_.load(":/images/titlebar/skin.png");
    menu_pixmap_.load(":/images/titlebar/menu.png");

    titlebar_background_.load(":/images/titlebar/bg.png", "0 0 0 0", "0 0 0 0");

    titlebar_qss_ = QString::fromLocal8Bit("font-size:12px; font-family:\"宋体\";color:white;font-weight:bold;");
    widget_qss_ = QString::fromLocal8Bit("*{font-size:12px; font-family:\"宋体\";}");

    background_.load(":/images/bg/bg.png" 
                    ,"82 82 82 82"       //border
                    ,"0  0  0  0"        //margin
                    );

    set_round_radius(4, 4);
}

void Skin::set_round_radius( int x, int y )
{
    round_radius_x_ = x;
    round_raidus_y_ = y;
}

void Skin::set_round_radius( const QString& radius )
{
    QTextStream qs((QString*)&radius);
    int x, y;
    qs >> x >> y;
    set_round_radius(x, y);
}

////////////////////Border_Image/////////////////////////////////////////////////

void Border_Image::set_pixmap( const QString& url )
{
    pixmap_.load(url);
}

void Border_Image::set_pixmap( const QPixmap& pixmap )
{
    pixmap_ = pixmap;
}

void Border_Image::set_border( const QString& border )
{
    QTextStream qs((QString*)&border);
    int left, top, right, bottom;
    qs >> left >> top >> right >> bottom;
    set_border(left, top, right, bottom);
}

void Border_Image::set_border( const QMargins& border )
{
    border_ = border;
}

void Border_Image::set_border( int left, int top, int right, int bottom )
{
    QMargins m(left, top, right, bottom);
    border_ = m;
}

void Border_Image::set_margin( const QString& border )
{
    QTextStream qs((QString*)&border);
    int left, top, right, bottom;
    qs >> left >> top >> right >> bottom;
    set_margin(left, top, right, bottom);
}

void Border_Image::set_margin( const QMargins& border )
{
    margin_ = border;
}

void Border_Image::set_margin( int left, int top, int right, int bottom )
{
    QMargins m(left, top, right, bottom);
    margin_ = m;
}

void Border_Image::load( const QString& pixmap_url, const QString& border, const QString& margin )
{
    set_pixmap(pixmap_url);
    set_border(border);
    set_margin(margin);
}

