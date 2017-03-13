#include "ppstream_main.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

#include "State_Button.h"
#include "ppstream_movies.h"
#include "ppstream_player.h"
#include "ppstream_adv.h"

//////////////////////////////////////////////////////////////////////////
void PPS_Skin::load()
{
    app_pixmap_.load(":/images/pps/aboutus_icon.png");
    min_pixmap_.load(":/images/pps/sys_min.png");
    max_pixmap_.load(":/images/pps/sys_max.png");
    restore_pixmap_.load(":/images/pps/sys_restore.png");
    close_pixmap_.load(":/images/pps/soft_close.png");
    skin_pixmap_.load(":/images/titlebar/skin.png");
    menu_pixmap_.load(":/images/pps/sys_menu.png");
    titlebar_background_.load(":/images/pps/bg.png", "0 0 0 0", "0 0 0 0");

    titlebar_qss_ = QString::fromLocal8Bit("font-size:12px; font-family:\"宋体\";color:white;font-weight:bold;");
    widget_qss_ = QString::fromLocal8Bit("*{font-size:12px; font-family:\"宋体\";}");

    background_.load(":/images/pps/bg.png", "10 50 10 10", "2  0  2  2");
    set_round_radius(4, 4);
}
//////////////////////////////////////////////////////////////////////////

ppstream_main::ppstream_main(QWidget *parent, Skin* skin)
    : Base_Widget<QWidget>(parent, skin)
{
    frame_layout_->removeWidget(title_bar_);

    create_top();
    create_line();
    create_client();

    resize(800, 600);
}

ppstream_main::~ppstream_main()
{

}

void ppstream_main::create_top() 
{
    //pps tv图标
    State_Button *pps_tv = new State_Button(this);
    pps_tv->load_pximap(":/images/pps/TitleIcon.png");
    pps_tv->setCursor(Qt::PointingHandCursor);

    //在线
    QWidget *online_tab_widget = new QWidget(this);
    online_tab_widget->setCursor(Qt::PointingHandCursor);
    online_tab_widget->setFixedSize(100, 35);
    online_tab_widget->setStyleSheet(QStringLiteral("background-image: url(:/images/pps/tabbar_pushed.png);"));

    QWidget *widget_3 = new QWidget(online_tab_widget);
    widget_3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //widget_3->setFixedSize(100, 35);
    widget_3->setStyleSheet(QStringLiteral("background-image: url(:/images/pps/light4.png);"));

    QPushButton *pushButton = new QPushButton(widget_3);
    //pushButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    pushButton->setFixedSize(100, 36);
    QPixmap online(QStringLiteral(":/images/pps/soft_tab_txt_1_s.png"));
    pushButton->setIcon(online);
    pushButton->setIconSize(online.size());
    pushButton->setStyleSheet(QStringLiteral("background:transparent;"));


    //陪你看世界, 一个背景. --->缺少好的透明背景图
    //QWidget *around_world = new QWidget(this);
    //around_world->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    //around_world->setStyleSheet(QStringLiteral("background-image: url(:/images/pps/ppsbooster_bg2.png);"));

    //Title_Bar, 登录，注册
    QVBoxLayout *title_bar_layout = new QVBoxLayout();

    title_bar_->set_show_style(Main_Title_Bar::SHOW_MENU
        |Title_Bar::SHOW_MIN_BUTTON|Title_Bar::SHOW_MAX_BUTTON
        |Title_Bar::SHOW_CLOSE_BUTTON);
    title_bar_->setFixedHeight(23);

    State_Button *login_btn = new State_Button(this);
    login_btn->load_pximap(":/images/pps/user_login_txt_2.png", 3);
    login_btn->setCursor(Qt::PointingHandCursor);

    State_Button *register_btn = new State_Button(this);
    register_btn->load_pximap(":/images/pps/user_login_txt_3.png", 3);
    register_btn->setCursor(Qt::PointingHandCursor);

    QHBoxLayout *login_reg_layout = new QHBoxLayout();
    login_reg_layout->setSpacing(0);
    login_reg_layout->setContentsMargins(0, 0, 0, 0);

    login_reg_layout->addStretch();
    login_reg_layout->addWidget(login_btn, 0, Qt::AlignVCenter);
    login_reg_layout->addSpacing(15);
    login_reg_layout->addWidget(register_btn, 0, Qt::AlignVCenter);
    login_reg_layout->addSpacing(15);

    title_bar_layout->addWidget(title_bar_, 0, Qt::AlignRight|Qt::AlignTop);
    title_bar_layout->addLayout(login_reg_layout, 1);

    //组合几个Widget到layout
    QHBoxLayout *top_layout = new QHBoxLayout();
    top_layout->setContentsMargins(0, 0, 0, 0);
    top_layout->setSpacing(0);

    top_layout->addSpacing(10);
    top_layout->addWidget(pps_tv, 0, Qt::AlignVCenter);
    top_layout->addWidget(online_tab_widget, 0, Qt::AlignBottom);
    top_layout->addStretch(0);
    //top_layout->addWidget(around_world);
    top_layout->addLayout(title_bar_layout);

    //
    QWidget *top_widget = new QWidget(this);
    top_widget->setFixedHeight(45);
    top_widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    top_widget->setLayout(top_layout);

    frame_layout_->insertWidget(0, top_widget);
}

void ppstream_main::create_line()
{
    QWidget *line = new QWidget(this);
    line->setFixedHeight(1);
    line->setStyleSheet(QStringLiteral("background-image: url(:/images/pps/list_top_line.png);"));
    layout_->addWidget(line);
}

void ppstream_main::create_client()
{
    ppstream_movies *left = new ppstream_movies(this);
    ppstream_player *mid = new ppstream_player(this);
    ppstream_adv *right = new ppstream_adv(this);

    QSplitter *s1 = new QSplitter(this);
    QSplitter *s2 = new QSplitter(this);
    
    s1->setStyleSheet(QStringLiteral("QSplitter::handle{height:3px; background:rgb(33, 33, 33);}"));
    s2->setStyleSheet(QStringLiteral("QSplitter::handle{height:3px; background:rgb(33, 33, 33);}"));

    s1->addWidget(left);
    s1->addWidget(s2);
    s1->setStretchFactor(1, 1);

    s2->addWidget(mid);
    s2->addWidget(right);
    s2->setStretchFactor(0, 1);

    s1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    
    layout_->addWidget(s1);
}

