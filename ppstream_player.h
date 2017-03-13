#ifndef PPSTREAM_PLAYER_H
#define PPSTREAM_PLAYER_H

#include <QWidget>
#include <QVBoxLayout>
#include <QSlider>
#include "QSS_Widget.h"
#include "State_Button.h"

class State_Button;
class Center_Widget;

//////////////////////////////////////////////////////////////////////////
class Center_Widget: public QSS_Widget
{
    Q_OBJECT

public:
    explicit Center_Widget(QWidget *parent);
    ~Center_Widget();

signals:
    void left_clicked();
    void right_clicked();

protected:
    void enterEvent(QEvent *);
    void leaveEvent(QEvent *);
    void timerEvent(QTimerEvent *);
    void resizeEvent(QResizeEvent *);

private:
    void create1();
    void start_timer();
    void kill_timer();
    void set_button_position();

private slots:
    void switch_left();
    void switch_right();

private:
    State_Button *switch_left_;
    State_Button *switch_right_;
    bool left_;
    bool right_;
    int  timer_id_;
};
//////////////////////////////////////////////////////////////////////////

class ppstream_player : public QWidget
{
    Q_OBJECT

public:
    ppstream_player(QWidget *parent);
    ~ppstream_player();

private:
    void create_top();
    void create_middle();
    void create_bottom();
    void create_bottom_control();

    void set_bottom_state();

private slots:
    void top_model_click();
    void top_most_click();
    void bottom_playpause_click();
    void stop_click();
    void volume_changed(int value);

private:
    //top
    State_Button *x1_;
    State_Button *x2_;
    State_Button *model_style_;
    State_Button *full_screen_;
    State_Button *top_most_;
    State_Button *screen_shot_;
    State_Button *favorite_;
    State_Button *share_;
    State_Button *schedule_;

    //center
    Center_Widget *center_;

    //bottom
    State_Button *network_icon_1_;
    State_Button *network_icon_2_;
    State_Button *network_icon_3_;
    QSlider      *play_slider_;
    State_Button *stop_;
    State_Button *prev_;
    State_Button *play_pause_;
    State_Button *next_;
    State_Button *volume_;
    QSlider      *volume_slider_;
    State_Button *bottom_full_screen_;
    bool          is_play_disabled_;           //是否禁止播放

    QVBoxLayout *layout_;

    bool is_simple_model_; //是否精简模式
    bool is_top_most_;    //
};

#endif // PPSTREAM_PLAYER_H
