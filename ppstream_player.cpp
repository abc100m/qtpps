#include "ppstream_player.h"

#include <QHBoxLayout>
#include "Event_Filter.h"


ppstream_player::ppstream_player(QWidget *parent)
    : QWidget(parent)
    ,is_simple_model_(false)
    ,is_top_most_(false)
    ,is_play_disabled_(true)
{
    layout_ = new QVBoxLayout();
    layout_->setSpacing(0);
    layout_->setContentsMargins(0, 0, 0, 0);

    create_top();
    create_middle();
    create_bottom();

    setLayout(layout_);
}

ppstream_player::~ppstream_player()
{

}

void ppstream_player::create_top()
{
    QWidget *top_widget = new QWidget(this);
    top_widget->setStyleSheet("QWidget{background:url(:/images/pps/player_top_bg.png);}");
    top_widget->setFixedHeight(24);

    x1_ = new State_Button(top_widget);
    x1_->load_pximap(":/images/pps/player_top_icon_01.png");

    x2_ = new State_Button(top_widget);
    x2_->load_pximap(":/images/pps/player_top_icon_02.png");

    model_style_ = new State_Button(top_widget);
    model_style_->load_pximap(":/images/pps/player_top_icon_03.png");

    full_screen_ = new State_Button(top_widget);
    full_screen_->load_pximap(":/images/pps/player_top_icon_05.png");

    top_most_ = new State_Button(top_widget);
    top_most_->load_pximap(":/images/pps/player_top_icon_08.png");

    screen_shot_ = new State_Button(top_widget);
    screen_shot_->load_pximap(":/images/pps/player_top_icon_09.png");

    favorite_ = new State_Button(top_widget);
    favorite_->load_pximap(":/images/pps/player_top_icon_10.png");

    share_ = new State_Button(top_widget);
    share_->load_pximap(":/images/pps/player_top_icon_11.png");

    schedule_ = new State_Button(top_widget);
    schedule_->load_pximap(":/images/pps/player_top_icon_12.png");

    QHBoxLayout *h = new QHBoxLayout();
    h->setSpacing(0);
    h->setContentsMargins(0, 0, 0, 0);

    h->addWidget(x1_);
    h->addWidget(x2_);
    h->addWidget(model_style_);
    h->addWidget(full_screen_);
    h->addWidget(top_most_);
    h->addStretch();
    h->addWidget(screen_shot_);
    h->addWidget(favorite_);
    h->addWidget(share_);
    h->addWidget(schedule_);

    top_widget->setLayout(h);

    layout_->addWidget(top_widget);

    connect(model_style_, SIGNAL(clicked()), this, SLOT(top_model_click()));
    connect(top_most_, SIGNAL(clicked()), this, SLOT(top_most_click()));
}

void ppstream_player::top_model_click()
{
    if (is_simple_model_)
    {
        model_style_->load_pximap(":/images/pps/player_top_icon_03.png");
    }else{
        model_style_->load_pximap(":/images/pps/player_top_icon_04.png");
    }
    model_style_->update();

    is_simple_model_ = !is_simple_model_;
}

void ppstream_player::top_most_click()
{
    if (is_top_most_)
    {
        top_most_->load_pximap(":/images/pps/player_top_icon_08.png");
    }else{
        top_most_->load_pximap(":/images/pps/player_top_icon_07.png");
    }
    top_most_->update();

    is_top_most_ = !is_top_most_;
}

void ppstream_player::create_middle()
{
    center_ = new Center_Widget(this);
    layout_->addWidget(center_, 1);
}

void ppstream_player::create_bottom_control()
{
    QSlider_Event_Filter *ef = new QSlider_Event_Filter(this);
    //bottom
    network_icon_1_ = new State_Button(this);
    network_icon_2_ = new State_Button(this);
    network_icon_3_ = new State_Button(this);
    play_slider_    = new QSlider(this);
    play_slider_->setOrientation(Qt::Horizontal);
    play_slider_->installEventFilter(ef);

    stop_ = new State_Button(this);
    prev_ = new State_Button(this);
    play_pause_ = new State_Button(this);
    next_ = new State_Button(this);
    volume_ = new State_Button(this);
    volume_slider_ = new QSlider(this);
    volume_slider_->setOrientation(Qt::Horizontal);
    volume_slider_->installEventFilter(ef);
    
    bottom_full_screen_ = new State_Button(this);

    stop_->load_pximap(":/images/pps/player_stop.png");
    prev_->load_pximap(":/images/pps/player_last.png");
    play_pause_->load_pximap(":/images/pps/player_play.png");
    next_->load_pximap(":/images/pps/player_next.png");
    volume_->load_pximap(":/images/pps/player_volume_1.png");
    bottom_full_screen_->load_pximap(":/images/pps/player_full.png");

    volume_slider_->setFixedWidth(60);
    volume_slider_->setStyleSheet(
        "QSlider::groove:horizontal {                                      "
        "    border-image: url(:/images/pps/player_volume_bg.png) 0 3 0 3; "
        "    border-width: 0 3 0 3;                                        "
        "    height:7px;                                                   "
        "}                                                                 "
        "QSlider::handle:horizontal {                                      "
        "    border-image: url(:/images/pps/player_volume_butten.png) 0 3; "
        "    border-width: 0 3;                                            "
        "   width: 6px;                                                    "
        "   height: 7px;                                                   "
        "   margin: 0 -4px;                                                "
        "}                                                                 "
        "QSlider::sub-page:horizontal {                                    "
        "    border-image: url(:/images/pps/player_volume_now.png) 0 3 0 3;"
        "    border-width: 0 3 0 3 ;                                       "
        "    height:7px;                                                   "
        "}                                                                 "
    );

    play_slider_->setFixedHeight(16);
    play_slider_->setStyleSheet(
        "QSlider::groove:horizontal {                                        "
        "    border-image: url(:/images/pps/player_timeline_bg.png) 4 4;     "
        "    border-width: 4 4;                                              "
        "    height:7px;                                                     "
        "}                                                                   "
        "QSlider::handle:horizontal {                                        "
        "    border-image: url(:/images/pps/player_timeline_butten2.png) 4 4;"
        "    border-width: 4 4;                                              "
        "    width:7px;                                                      "
        "    height:14px;                                                    "
        "    margin: -4px -5px;                                              "
        "}                                                                   "
        "QSlider::handle:horizontal:disabled {                               "
        "width: 0px;                                                         "
        "height:0px;                                                         "
        "border:0px;                                                         "
        "}                                                                   "
        "QSlider::sub-page:horizontal {                                      "
        "    border-image: url(:/images/pps/player_timeline_now.png) 0 3 0 3;"
        "    border-width: 0 3 0 3 ;                                         "
        "    height:7px;                                                     "
        "}                                                                   "
        "QSlider::sub-page:horizonta:disabled {                              "
        "width: 0px;                                                         "
        "height:0px;                                                         "
        "border:0px;                                                         "
        "}                                                                   "
    );

    set_bottom_state();

    connect(play_pause_, SIGNAL(clicked()), this, SLOT(bottom_playpause_click()));
    connect(stop_, SIGNAL(clicked()), this, SLOT(stop_click()));
    connect(volume_slider_, SIGNAL(valueChanged(int)), this, SLOT(volume_changed(int)));
}

void ppstream_player::set_bottom_state()
{
    play_slider_->setValue(play_slider_->minimum());

    if (!is_play_disabled_)
    {
        network_icon_1_->load_pximap(":/images/pps/player_network_icon_1.png", 1);
        network_icon_2_->load_pximap(":/images/pps/player_network_icon_1.png", 1);
        network_icon_3_->load_pximap(":/images/pps/player_network_icon_1.png", 1);

        stop_->setEnabled(true);
        prev_->setEnabled(true);
        next_->setEnabled(true);
        play_slider_->setEnabled(true);

        play_pause_->load_pximap(":/images/pps/player_play.png");
    }else{
        network_icon_1_->load_pximap(":/images/pps/player_network_icon_0.png", 1);
        network_icon_2_->load_pximap(":/images/pps/player_network_icon_0.png", 1);
        network_icon_3_->load_pximap(":/images/pps/player_network_icon_0.png", 1);

        stop_->setEnabled(false);
        prev_->setEnabled(false);
        next_->setEnabled(false);
        play_slider_->setEnabled(false);

        play_pause_->load_pximap(":/images/pps/player_play.png");
    }
}

void ppstream_player::create_bottom()
{
    create_bottom_control();

    QWidget *bottom = new QWidget(this);
   // bottom->setFixedHeight(51);
    bottom->setObjectName("play_bottom");
    bottom->setStyleSheet("QWidget#play_bottom{border-image:url(:/images/pps/player_bg.png) 1 1; border-width:1 1;}");

    QHBoxLayout *h_icon = new QHBoxLayout();
    h_icon->setContentsMargins(0, 3, 0, 0);
    h_icon->setSpacing(5);
    h_icon->addWidget(network_icon_1_, 0, Qt::AlignVCenter);
    h_icon->addWidget(network_icon_2_, 0, Qt::AlignVCenter);
    h_icon->addWidget(network_icon_3_, 0, Qt::AlignVCenter);

    QHBoxLayout *h1 = new QHBoxLayout();
    h1->setContentsMargins(5, 1, 5, 1);
    h1->setSpacing(5);
    h1->addLayout(h_icon);
    h1->addWidget(play_slider_,    1, Qt::AlignTop);
    play_slider_->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    QHBoxLayout *h2 = new QHBoxLayout();
    h2->setContentsMargins(5, 5, 5, 5);
    h2->setSpacing(3);
    h2->addStretch();
    h2->addWidget(stop_);
    h2->addWidget(prev_);
    h2->addWidget(play_pause_);
    h2->addWidget(next_);
    h2->addWidget(volume_);
    h2->addWidget(volume_slider_);
    h2->addStretch();
    h2->addWidget(bottom_full_screen_);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(0);

    layout->addLayout(h1);
    layout->addLayout(h2);

    bottom->setLayout(layout);
    layout_->addWidget(bottom);
}

void ppstream_player::bottom_playpause_click()
{
    if (is_play_disabled_)
    {
        is_play_disabled_ = false;
        set_bottom_state();
    }else{
        play_pause_->load_pximap(":/images/pps/player_pause.png");
    }

    update();
}

void ppstream_player::stop_click()
{
    is_play_disabled_ = true;
    set_bottom_state();
    update();
}

void ppstream_player::volume_changed( int value )
{
    if (0 == value)
    {
        volume_->load_pximap(":/images/pps/player_volume_0.png");
    }
    else if (value > 0 && value <= 20)
    {
        volume_->load_pximap(":/images/pps/player_volume_4.png");
    }
    else if (value > 20 && value <=50)
    {
        volume_->load_pximap(":/images/pps/player_volume_1.png");
    }
    else if (value > 50 && value <= 80)
    {
        volume_->load_pximap(":/images/pps/player_volume_2.png");
    }
    else if (value > 80)
    {
        volume_->load_pximap(":/images/pps/player_volume_3.png");
    }
    update();
}


//////////////////////////////////////////////////////////////////////////
void Center_Widget::switch_left()
{
    if (left_)
    {
        switch_left_->load_pximap(":/images/pps/player_left_butten_2.png", 3);
    }else{
        switch_left_->load_pximap(":/images/pps/player_left_butten_1.png", 3);
    }
    switch_left_->update();
    left_ = !left_;
    start_timer();

    emit left_clicked();
}

void Center_Widget::switch_right()
{
    if (right_)
    {
        switch_right_->load_pximap(":/images/pps/player_right_butten_2.png", 3);
    }else{
        switch_right_->load_pximap(":/images/pps/player_right_butten_1.png", 3);
    }
    switch_right_->update();
    right_ = !right_;
    start_timer();

    emit right_clicked();
}

void Center_Widget::create1()
{
    setStyleSheet("QWidget{background-color:black;}");

    QWidget *center = new QWidget(this);
    center->setFixedSize(350, 170);
    center->setStyleSheet("QWidget::hover{background:url(:/images/pps/new_logo_hover.png);} QWidget{background:url(:/images/pps/new_logo_normal.png);}");

    switch_left_ = new State_Button(this);
    switch_left_->load_pximap(":/images/pps/player_left_butten_2.png", 3);
    switch_left_->hide();

    switch_right_ = new State_Button(this);
    switch_right_->load_pximap(":/images/pps/player_right_butten_2.png", 3);
    switch_right_->hide();

    QHBoxLayout *h = new QHBoxLayout();
    //h->addWidget(switch_left_);
    h->addWidget(center, 1, Qt::AlignHCenter|Qt::AlignVCenter);
    //h->addWidget(switch_right_);

    setLayout(h);

    connect(switch_left_, SIGNAL(clicked()), this, SLOT(switch_left()));
    connect(switch_right_, SIGNAL(clicked()), this, SLOT(switch_right()));
}

void Center_Widget::enterEvent( QEvent * )
{
    switch_left_->show();
    switch_right_->show();
    start_timer();
}

void Center_Widget::leaveEvent( QEvent * )
{
    switch_left_->hide();
    switch_right_->hide();
    kill_timer();
}

Center_Widget::Center_Widget( QWidget *parent )
    :QSS_Widget(parent)
    ,left_(false)
    ,right_(false)
    ,timer_id_(0)
{
    create1();
}

Center_Widget::~Center_Widget()
{
    kill_timer();
}

void Center_Widget::timerEvent( QTimerEvent *e )
{
    if (e->timerId() == timer_id_)
    {
        switch_left_->hide();
        switch_right_->hide();
        kill_timer();
    }
}

void Center_Widget::start_timer()
{
    kill_timer();
    timer_id_ = startTimer(3000);
}

void Center_Widget::kill_timer()
{
    if (timer_id_ != 0)
    {
        killTimer(timer_id_);
        timer_id_ = 0;
    }
}

void Center_Widget::set_button_position()
{
    //left button
    int h1 = (height() - switch_left_->height())/2;
    switch_left_->move(0, h1);

    //right button
    int h2 = (height() - switch_right_->height())/2;
    int w2 = width() - switch_right_->width();
    switch_right_->move(w2, h2);
}

void Center_Widget::resizeEvent( QResizeEvent * )
{
    set_button_position();
}
//////////////////////////////////////////////////////////////////////////

