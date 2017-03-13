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
	//ö�ٰ�ť�ļ���״̬
	enum ButtonStatus {NORMAL, HOVER, PRESSED, DISABLED, CHECKED};
    //pximap_λͼ����, ����ѡ����һ. ������߶���Ҫ����ѡ��BACKGROUND + QPushButton::setIcon
    enum PixmapType   {FOREGROUND, BACKGROUND};

    QPixmap         pixmap_;        //ͼƬ
    PixmapType      pixmap_type_;
    int             state_count_;   //ͼƬ�м���״̬(������ͼ)
	ButtonStatus    status_;        //��ǰ״̬
	int             width_;         //��ť���
	int             height_;        //��ť�߶�
	bool            mouse_pressed_; //�������Ƿ���
};

#endif //
