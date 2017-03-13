#ifndef _STATE_BUTTON_H_
#define _STATE_BUTTON_H_

#include <QtWidgets/QPushButton>
#include <QPainter>
#include <QMouseEvent>

//a pixmap have 5 picture which state is normal\hover\pressed\disabled\checked

class State_Button : public QPushButton
{
	Q_OBJECT
public:
	explicit State_Button(QWidget *parent = 0);
	~State_Button();

public:
	void load_pximap(const QString& pic_name, int state_count=4);
    void set_pixmap(const QPixmap& pixmap, int state_count=4);

    void load_background(const QString& pic_name, int state_count=4);
    void set_background(const QPixmap& pixmap, int state_count=4);

protected:
	void enterEvent(QEvent *);
	void leaveEvent(QEvent *);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void paintEvent(QPaintEvent *);

private:
    void paint_pixmap();

private:
	//枚举按钮的几种状态
	enum ButtonStatus {NORMAL, HOVER, PRESSED, DISABLED, CHECKED};
    //pximap_位图类型, 仅能选择其一. 如果两者都需要，请选择BACKGROUND + QPushButton::setIcon
    enum PixmapType   {FOREGROUND, BACKGROUND};

    QPixmap         pixmap_;        //图片
    PixmapType      pixmap_type_;
    int             state_count_;   //图片有几种状态(几张子图)
	ButtonStatus    status_;        //当前状态
	int             width_;         //按钮宽度
	int             height_;        //按钮高度
	bool            mouse_pressed_; //鼠标左键是否按下
};

#endif //
