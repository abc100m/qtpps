#ifndef _SKIN_H_
#define _SKIN_H_

#include <QScopedPointer>
#include <QPixmap>
#include <QMargins>

//�߿�ͼƬ������һ�ű���ͼ, qss��border-width, qss��margin
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
    //Ӧ�ó���ͼ��
    const QPixmap& app_pixamp() const {return app_pixmap_;}  
    //��С����ť,4��״̬
    const QPixmap& min_pixmap() const {return min_pixmap_;}
    //��󻯰�ť,4��״̬
    const QPixmap& max_pixmap() const {return max_pixmap_;}
    //�ָ���ť,4��״̬
    const QPixmap& restore_pixmap() const {return restore_pixmap_;}
    //�رհ�ť,4��״̬
    const QPixmap& close_pixmap() const {return close_pixmap_;}
    //������ť��4��״̬
    const QPixmap& skin_pixmap() const {return skin_pixmap_;}
    //�˵���ť��4��״̬
    const QPixmap& menu_pixmap() const {return menu_pixmap_;}
    //�����QSS,����һ��label
    const QString& titlebar_qss() const {return titlebar_qss_;}

    //�������ı���
    const Border_Image& titlebar_background() const {return titlebar_background_;}

    //Base_Widget�ڴ�����Ĭ��ʹ�õ�qss, ����������������
    const QString& widget_qss() const {return widget_qss_;}

    //����
    const Border_Image& background() const {return background_;}

    int round_radius_x() const {return round_radius_x_;}
    int round_radius_y() const {return round_raidus_y_;}

public:
    static Skin* instance();
    static void  instance(Skin* i);

    //��ȡƤ��
    virtual void load();

protected:
    void set_round_radius(int x, int y);
    void set_round_radius(const QString& radius);

private:
    static QScopedPointer<Skin> s_instance;

protected:
    //ͼƬ��Դ
    QPixmap      app_pixmap_;
    QPixmap      min_pixmap_;
    QPixmap      max_pixmap_;
    QPixmap      restore_pixmap_;
    QPixmap      close_pixmap_;
    QPixmap      skin_pixmap_;
    QPixmap      menu_pixmap_;

    //����QSS,QLabel
    QString      titlebar_qss_;

    //titlebar�߿�ͼ
    Border_Image titlebar_background_;

    //Base_Widget�ڴ�����Ĭ��ʹ�õ�qss, ����һЩ�������ԣ��磺����
    QString      widget_qss_;

    //Բ��
    int         round_radius_x_, round_raidus_y_;

    //����ͼ
    Border_Image background_;
};

#define skin() (Skin::instance())

#endif
