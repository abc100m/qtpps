#include "ppstream_movies.h"
#include "ppstream_tab.h"
#include <QVBoxLayout>
#include "State_Button.h"
#include "ppstream_tab.h"
#include "ppstream_setting.h"
#include <QStackedWidget>

ppstream_movies::ppstream_movies(QWidget *parent)
    : QSS_Widget(parent)
{
    setObjectName(QStringLiteral("ppstream_movies"));
    layout_ = new QHBoxLayout();
    layout_->setSpacing(0);
    layout_->setContentsMargins(0, 0, 0, 0);

    create_left_button();
    create_stack_widget();

    layout_->addStretch();

    setLayout(layout_);
}

ppstream_movies::~ppstream_movies()
{

}

void ppstream_movies::create_left_button()
{
    QString qss = "QPushButton{background:transparent;} QPushButton::checked{background-image:url(:/images/pps/lift_tab_icon_bg.png);}";

    State_Button *home_page = new State_Button(this);
    home_page->load_pximap(QStringLiteral(":/images/pps/lefttop1.png"), 5);
    home_page->setToolTip(QString::fromLocal8Bit("首页"));
    home_page->setCheckable(true);
    home_page->setAutoExclusive(true);
    home_page->setStyleSheet(qss);
    home_page->setChecked(true);

    State_Button *history = new State_Button(this);
    history->load_pximap(QStringLiteral(":/images/pps/lefttop3.png"), 5);
    history->setToolTip(QString::fromLocal8Bit("历史"));
    history->setCheckable(true);
    history->setAutoExclusive(true);
    history->setStyleSheet(qss);

    State_Button *favorite = new State_Button(this);
    favorite->load_pximap(QStringLiteral(":/images/pps/lefttop4.png"), 5);
    favorite->setToolTip(QString::fromLocal8Bit("收藏"));
    favorite->setCheckable(true);
    favorite->setAutoExclusive(true);
    favorite->setStyleSheet(qss);

    State_Button *download = new State_Button(this);
    download->load_pximap(QStringLiteral(":/images/pps/lefttop6.png"), 5);
    download->setToolTip(QString::fromLocal8Bit("下载"));
    download->setCheckable(true);
    download->setAutoExclusive(true);
    download->setStyleSheet(qss);

    State_Button *setting = new State_Button(this);
    setting->load_pximap(QStringLiteral(":/images/pps/lefttop7.png"), 5);
    setting->setToolTip(QString::fromLocal8Bit("设置"));
    //setting->setCheckable(true);
    //setting->setAutoExclusive(true);
    //setting->setStyleSheet(qss);

    QVBoxLayout *button_layout = new QVBoxLayout();
    button_layout->setSpacing(0);
    button_layout->setContentsMargins(5, 0, 5, 0);

    button_layout->addSpacing(25);
    button_layout->addWidget(home_page);
    button_layout->addWidget(history);
    button_layout->addWidget(favorite);
    button_layout->addWidget(download);
    button_layout->addStretch();
    button_layout->addWidget(setting);
    button_layout->addSpacing(10);

    QWidget *left = new QWidget(this);
    left->setObjectName("ppstream_movies_left_buttons");
    left->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    left->setLayout(button_layout);
    left->setStyleSheet("#ppstream_movies_left_buttons{border-image:url(:/images/pps/lefttopbk.png) 1 2 1 1 ; border-width:1 2 1 1 ;}");

    layout_->addWidget(left);

    connect(home_page, SIGNAL(clicked()), this, SLOT(home_button_clicked()));
    connect(history, SIGNAL(clicked()), this, SLOT(history_button_clicked()));
    connect(favorite, SIGNAL(clicked()), this, SLOT(favorite_button_clicked()));
    connect(download, SIGNAL(clicked()), this, SLOT(download_button_clicked()));
    connect(setting, SIGNAL(clicked()), this, SLOT(setting_button_clicked()));
}

void ppstream_movies::create_stack_widget()
{
    homepage_tab *home      = new homepage_tab(this);
    history_tab  *history   = new history_tab(this);
    //favorite_tab *favrite   = new favorite_tab(this);
    //download_tab *download  = new download_tab(this);
    history_tab *favrite   = new history_tab(this);
    history_tab *download  = new history_tab(this);

    stack_widget_ = new QStackedWidget(this);
    stack_widget_->addWidget(home);
    stack_widget_->addWidget(history);
    stack_widget_->addWidget(favrite);
    stack_widget_->addWidget(download);

    layout_->addWidget(stack_widget_, 1);
}

void ppstream_movies::home_button_clicked()
{
    stack_widget_->setCurrentIndex(0);
}

void ppstream_movies::history_button_clicked()
{
    stack_widget_->setCurrentIndex(1);
}

void ppstream_movies::favorite_button_clicked()
{
    stack_widget_->setCurrentIndex(2);
}

void ppstream_movies::download_button_clicked()
{
    stack_widget_->setCurrentIndex(3);
}

void ppstream_movies::setting_button_clicked()
{
    ppstream_setting::show_setting(0);

}

