#ifndef _SKIN_H_
#define _SKIN_H_

#include <QScopedPointer>
#include <QPixmap>
#include <QMargins>

//边框图片：包含一张背景图, qss的border-width, qss的margin
class Border_Image
{
public:
    const QMargins& margin() const {return margin_;}
    const QMargins& border() const {return border_;}
    const QPixmap&  pixmap() const {return pixmap_;}

public:
    void set_pixmap(const QString& url);
    void set_pixmap(const QPixmap& pixmap);

    //order: left top right bottom
    void set_border(const QString& border); 
    void set_border(const QMargins& border);
    void set_border(int left, int top, int right, int bottom);

    void set_margin(const QString& border);
    void set_margin(const QMargins& border);
    void set_margin(int left, int top, int right, int bottom);

    void load(const QString& pixmap_url, const QString& border, const QString& margin);

private:
    QMargins margin_;
    QMargins border_;
    QPixmap  pixmap_;
};


class Skin
{
public:
    Skin();
    ~Skin();

public:
    //应用程序图标
    const QPixmap& app_pixamp() const {return app_pixmap_;}  
    //最小化按钮,4种状态
    const QPixmap& min_pixmap() const {return min_pixmap_;}
    //最大化按钮,4种状态
    const QPixmap& max_pixmap() const {return max_pixmap_;}
    //恢复按钮,4种状态
    const QPixmap& restore_pixmap() const {return restore_pixmap_;}
    //关闭按钮,4种状态
    const QPixmap& close_pixmap() const {return close_pixmap_;}
    //换肤按钮，4种状态
    const QPixmap& skin_pixmap() const {return skin_pixmap_;}
    //菜单按钮，4种状态
    const QPixmap& menu_pixmap() const {return menu_pixmap_;}
    //标题的QSS,这是一个label
    const QString& titlebar_qss() const {return titlebar_qss_;}

    //标题栏的背景
    const Border_Image& titlebar_background() const {return titlebar_background_;}

    //Base_Widget在创建后默认使用的qss, 可以用来设置字体
    const QString& widget_qss() const {return widget_qss_;}

    //背景
    const Border_Image& background() const {return background_;}

    int round_radius_x() const {return round_radius_x_;}
    int round_radius_y() const {return round_raidus_y_;}

public:
    static Skin* instance();
    static void  instance(Skin* i);

    //读取皮肤
    virtual void load();

protected:
    void set_round_radius(int x, int y);
    void set_round_radius(const QString& radius);

private:
    static QScopedPointer<Skin> s_instance;

protected:
    //图片资源
    QPixmap      app_pixmap_;
    QPixmap      min_pixmap_;
    QPixmap      max_pixmap_;
    QPixmap      restore_pixmap_;
    QPixmap      close_pixmap_;
    QPixmap      skin_pixmap_;
    QPixmap      menu_pixmap_;

    //标题QSS,QLabel
    QString      titlebar_qss_;

    //titlebar边框图
    Border_Image titlebar_background_;

    //Base_Widget在创建后默认使用的qss, 设置一些公共属性，如：字体
    QString      widget_qss_;

    //圆角
    int         round_radius_x_, round_raidus_y_;

    //背景图
    Border_Image background_;
};

#define skin() (Skin::instance())

#endif
