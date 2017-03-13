#include "safe360_main.h"
#include "Title_Bar.h"
#include "safe360_setting.h"

safe360_main::safe360_main(QWidget *parent)
    : Base_Widget<QWidget>(parent)
{
    title_bar_->set_show_style(title_bar_->get_show_style() | Title_Bar::DRAW_BACKGROUND);
    title_bar_->fix_height_to_background();
    title_bar_->set_text(QString::fromLocal8Bit("金山卫士4.6正式版"));
    title_bar_->setStyleSheet(QString::fromLocal8Bit("font-size:12px; font-family:\"宋体\";color:white;font-weight:bold;"));

    button_bar_ = new Button_Bar(this);
    button_bar_->setStyleSheet(QString::fromLocal8Bit("font-size:12px; font-family:\"宋体\";color:white;"));
    setup_button_bar();
    button_bar_->at(0)->setChecked(true);

    stacked_widget_ = new QStackedWidget(this);
    setup_stackwidget(stacked_widget_);
    stacked_widget_->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    status_bar_ = new QWidget(this);
    setup_statusbar(status_bar_);
    status_bar_->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    layout_->addWidget(button_bar_, 0, Qt::AlignTop);
    layout_->addWidget(stacked_widget_);
    layout_->addWidget(status_bar_, 0, Qt::AlignBottom);
    
    create_menu();    

    connect(title_bar_, SIGNAL(menu_clicked()), this, SLOT(show_main_menu()));
    connect(button_bar_, SIGNAL(button_clicked(int)), this, SLOT(button_clicked(int)));
}

safe360_main::~safe360_main()
{

}

void safe360_main::setup_stackwidget( QStackedWidget *stackedWidget )
{
    QWidget* page = new QWidget();
    page->setObjectName(QStringLiteral("page"));
    QLabel *label = new QLabel(page);
    label->setObjectName(QStringLiteral("label"));
    label->setGeometry(QRect(160, 180, 46, 13));
    stackedWidget->addWidget(page);
    QWidget *page_2 = new QWidget();
    page_2->setObjectName(QStringLiteral("page_2"));
    QPushButton *pushButton = new QPushButton(page_2);
    pushButton->setObjectName(QStringLiteral("pushButton"));
    pushButton->setGeometry(QRect(170, 160, 75, 23));
    stackedWidget->addWidget(page_2);
    QWidget *page_3 = new QWidget();
    page_3->setObjectName(QStringLiteral("page_3"));
    QPushButton *pushButton_3 = new QPushButton(page_3);
    pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
    pushButton_3->setGeometry(QRect(220, 170, 75, 23));
    stackedWidget->addWidget(page_3);
    QWidget *page_4 = new QWidget();
    page_4->setObjectName(QStringLiteral("page_4"));
    QPushButton *pushButton_4 = new QPushButton(page_4);
    pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
    pushButton_4->setGeometry(QRect(200, 160, 75, 23));
    stackedWidget->addWidget(page_4);

    label->setText(QApplication::translate("Button_Bar", "first form", 0));
    pushButton_3->setText(QApplication::translate("Button_Bar", "second form", 0));
    pushButton_4->setText(QApplication::translate("Button_Bar", "third ", 0));
    pushButton->setText(QApplication::translate("Button_Bar", "good idea", 0));

    stackedWidget->setCurrentIndex(0);
}

void safe360_main::setup_button_bar()
{
    QStringList image_list;
    QStringList title_list;

    image_list<<":/images/tiJian"<<":/images/muMa"<<":/images/louDong"<<":/images/xiTong"
        <<":/images/qingLi"<<":/images/jiaSu"<<":/images/menZhen"<<":/images/ruanJian";
    title_list << QString::fromLocal8Bit("电脑体检") << QString::fromLocal8Bit("木马查杀")
        << QString::fromLocal8Bit("漏洞修复") << QString::fromLocal8Bit("系统修复")
        << QString::fromLocal8Bit("电脑清理") << QString::fromLocal8Bit("优化加速")
        << QString::fromLocal8Bit("电脑专家") << QString::fromLocal8Bit("软件管家")
        ;

    for (int i=0; i<image_list.size(); ++i)
    {
        button_bar_->add(image_list[i], title_list[i]);
    }

    button_bar_->add_stretch();

    QPushButton *logo = new QPushButton();
    QPixmap pixmap(":/images/logo.png");
    logo->setIcon(pixmap);
    logo->setIconSize(pixmap.size());
    logo->setFixedSize(pixmap.size());
    logo->setCursor(Qt::PointingHandCursor);
    logo->setFlat(true);
    logo->setStyleSheet("background:transparent;");
    connect(logo, SIGNAL(clicked()), this, SLOT(navigate_home()));

    button_bar_->add_widget(logo, 0, Qt::AlignRight);
}

void safe360_main::button_clicked( int i )
{
    if (i < stacked_widget_->count())
    {
        stacked_widget_->setCurrentIndex(i);
    }
}

void safe360_main::navigate_home()
{
    QDesktopServices::openUrl(QStringLiteral("http://www.csdn.net"));
}

void safe360_main::setup_statusbar( QWidget* widget )
{
    QString bg_url = QStringLiteral(":/images/status_bar.png");
    {
        QPixmap pixmap(bg_url);
        widget->setFixedHeight(pixmap.height());
    }
    widget->setObjectName(QStringLiteral("status_bar"));
    widget->setStyleSheet(QStringLiteral("#status_bar{border-image: url(%1);}").arg(bg_url));

    QHBoxLayout *horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

    QLabel *label_2 = new QLabel(widget);
    label_2->setObjectName(QStringLiteral("label_2"));
    //label_2->setAutoFillBackground(true);
    //label_2->setStyleSheet("background:transparent;");

    QSpacerItem *horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    QLabel *label = new QLabel(widget);
    label->setObjectName(QStringLiteral("label"));
    //label->setStyleSheet("background:transparent;");

    horizontalLayout->addWidget(label_2);
    horizontalLayout->addItem(horizontalSpacer_2);
    horizontalLayout->addWidget(label);
    horizontalLayout->addItem(horizontalSpacer);

    widget->setLayout(horizontalLayout);

    label_2->setText(QString::fromLocal8Bit("主程序版本:4.6.0.3627"));
    label->setText(QString::fromLocal8Bit("本地木马库:2013.7.30.17"));
}

QRect safe360_main::background_rect() const
{
    QRect r = rect();
    r.adjust(0, title_bar_->rect().height(), 0, 0);
    return r;
}

void safe360_main::create_menu()
{
    menu_ = new QMenu();
    menu_->addAction(QString::fromLocal8Bit("设置"), this, SLOT(show_setting_dialog()));
    menu_->addAction(QString::fromLocal8Bit("新版特性"));
    menu_->addAction(QString::fromLocal8Bit("检查更新"));
    menu_->addSeparator();
    menu_->addAction(QString::fromLocal8Bit("在线帮助"));
    menu_->addAction(QString::fromLocal8Bit("论坛求助"));
    menu_->addAction(QString::fromLocal8Bit("360网站"));
    menu_->addAction(QString::fromLocal8Bit("隐私保护"));
    menu_->addSeparator();
    menu_->addAction(QIcon(":/images/titlebar/icon.png"), QString::fromLocal8Bit("关于我们"));
    menu_->addAction(QString::fromLocal8Bit("About Qt"), qApp, SLOT(aboutQt()));
}

void safe360_main::show_main_menu()
{
    menu_->exec(QCursor::pos());
}

void safe360_main::show_setting_dialog()
{
    safe360_setting dlg(this);
    dlg.exec();
}

