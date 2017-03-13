#ifndef _TITLE_BAR_H_
#define _TITLE_BAR_H_

#include <QtWidgets/QtWidgets>

class State_Button;
class Skin;

class Title_Bar: public QWidget
{
    Q_OBJECT
public:
    enum Show_Style{
        SHOW_ICON            = 0x01,
        SHOW_TITLE           = 0x02,
        SHOW_MIN_BUTTON      = 0x04,
        SHOW_MAX_BUTTON      = 0x08,
        SHOW_CLOSE_BUTTON    = 0x10,
        DRAW_BACKGROUND      = 0x20,        //是否绘制标题栏的背景

        FORM_STYLE           = SHOW_ICON|SHOW_TITLE|SHOW_MIN_BUTTON|SHOW_MAX_BUTTON|SHOW_CLOSE_BUTTON,
        DIALOG_STYLE         = SHOW_TITLE|SHOW_CLOSE_BUTTON,
        DIALOG_ICON_STYLE    = SHOW_ICON|DIALOG_STYLE,

        FORM_BG_STYLE        = FORM_STYLE|DRAW_BACKGROUND,
        DIALOG_BG_STYLE      = DIALOG_STYLE|DRAW_BACKGROUND,
        DIALOG_ICON_BG_STYLE = DIALOG_ICON_STYLE|DRAW_BACKGROUND
    };

public:
    Title_Bar(QWidget *parent, Skin *skin = NULL);
    /*virtual*/ ~Title_Bar();

    int   get_show_style() const {return show_style_;};
    virtual void  set_show_style(int style);

    QString text(){return title_->text();}
    void set_text(const QString& text){title_->setText(text);}
    void set_text_style_sheet(const QString& qss){title_->setStyleSheet(qss);}
    bool is_window_maximized() const {return is_maxed_;}

    //将高度设置为背景图片的大小, 最好在在show_style_设置为DRAW_BACKGROUND时使用
    void fix_height_to_background();

    virtual void load_skin(Skin* skin=NULL);

private:
    int init();
    void load_skin_internal();

private slots:
    void show_small();
    void show_max_restore();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);

protected:
    QHBoxLayout  *hbox_layout_;
    QLabel       *icon_;
    QLabel       *title_;
    State_Button *min_button_;
    State_Button *max_button_;
    State_Button *close_button_;

    int         show_style_;
    QRect       normal_rect_;
    QPoint      click_pos_;     //
    bool        left_pressed_;   //left mouse pressed
    bool        is_maxed_;       //window Maximized

    Skin        *skin_;
};

class Main_Title_Bar: public Title_Bar
{
    Q_OBJECT
public:
    enum Show_Style_Ex{
        SHOW_SKIN            = 0x40,
        SHOW_MENU            = 0x80,
        MAIN_FORM_STYLE      = Title_Bar::FORM_STYLE|SHOW_MENU,
        MAIN_FORM_SKIN_STYLE = MAIN_FORM_STYLE | SHOW_SKIN
    };

public:
    Main_Title_Bar(QWidget* parent, Skin *skin = NULL);
    ~Main_Title_Bar();

signals:
    //on skin button clicked
    void skin_clicked();
    // on menu button clicked
    void menu_clicked();

public:
    //overload
    virtual void set_show_style(int style);
    virtual void load_skin(Skin* skin=NULL);

private:
    void init();
    void load_skin_internal();

protected:
    State_Button* skin_button_;
    State_Button* menu_button_;
};


#endif

