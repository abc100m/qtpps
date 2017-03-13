#include "Title_Bar.h"
#include "Skin.h"
#include "State_Button.h"
#include <qdrawutil.h>

Title_Bar::Title_Bar( QWidget* parent, Skin *skin )
    :QWidget(parent)
    ,left_pressed_(false)
    ,show_style_(FORM_STYLE) //default: show all title buttons
    ,is_maxed_(false)
    ,skin_(skin)
{
    hbox_layout_  = new QHBoxLayout(this);
    icon_         = new QLabel(this);
    title_        = new QLabel(this);
    min_button_   = new State_Button(this);
    max_button_   = new State_Button(this);
    close_button_ = new State_Button(this);

    //设置name以方便使用 CSS 
    icon_->setObjectName("title_bar_icon");
    title_->setObjectName("title_bar_text");
    min_button_->setObjectName("title_bar_min");
    max_button_->setObjectName("title_bar_max");
    close_button_->setObjectName("title_bar_close");

    if (NULL == skin_)
    {
        skin_ = Skin::instance();
    }

    load_skin_internal();
    init();
}

Title_Bar::~Title_Bar()
{
}

int Title_Bar::init()
{
    //title
    title_->setText("Title bar");

    // 标题栏高度
    int titlebar_height = style()->pixelMetric(QStyle::PM_TitleBarHeight);
    setFixedHeight(titlebar_height);

    const int frame_width = 5;

    //layout
    hbox_layout_->addWidget(icon_, 0, Qt::AlignVCenter);
    hbox_layout_->addSpacing(frame_width);
    hbox_layout_->addWidget(title_, 0, Qt::AlignVCenter);
    hbox_layout_->addStretch();
    hbox_layout_->addWidget(min_button_, 0, Qt::AlignTop);
    hbox_layout_->addWidget(max_button_, 0, Qt::AlignTop);
    hbox_layout_->addWidget(close_button_, 0, Qt::AlignTop);

    hbox_layout_->setSpacing(0);

    //
    setLayout(hbox_layout_);
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    //
    connect(min_button_, SIGNAL(clicked()), this, SLOT(show_small()));
    connect(max_button_, SIGNAL(clicked()), this, SLOT(show_max_restore()));
    connect(close_button_, SIGNAL(clicked()), window(), SLOT(close()));

    return 0;
}

void Title_Bar::load_skin_internal()
{
    //margin
    hbox_layout_->setContentsMargins(skin_->titlebar_background().margin());

    //icon
    icon_->setPixmap(skin_->app_pixamp());
    icon_->setFixedSize(16, 16);
    icon_->setScaledContents(true);

    //title
    title_->setStyleSheet(skin_->titlebar_qss());

    //windows taskbar icon
    window()->setWindowIcon(skin_->app_pixamp());

    //
    min_button_->set_pixmap(skin_->min_pixmap());
    max_button_->set_pixmap(skin_->max_pixmap());
    close_button_->set_pixmap(skin_->close_pixmap());
}

void Title_Bar::load_skin(Skin* skin)
{
    if (NULL != skin)
    {
        skin_ = skin;
    }
    load_skin_internal();
}

void Title_Bar::show_max_restore()
{
    if (is_maxed_)
    {
        is_maxed_ = false;
        window()->setGeometry(normal_rect_);
        max_button_->set_pixmap(skin_->max_pixmap());
    } else {
        is_maxed_ = true;
        //avoid max-size overlap taskbar, this BUG still exists until Qt 5.1
        normal_rect_ = window()->geometry();
        window()->setGeometry(QApplication::desktop()->availableGeometry());
        max_button_->set_pixmap(skin_->restore_pixmap());
    }
}

void Title_Bar::mousePressEvent( QMouseEvent *e )
{
    QRect r = rect();
    r.adjust(5, 5, -5, -5);
    if (r.contains(e->pos()))   //5:边框大小，边框用来拉伸改变窗口大小
    {
        if (e->button() == Qt::LeftButton)
        {
            left_pressed_ = true;
            click_pos_ = mapToParent(e->pos());
            e->accept();
            return;
        }
    }

    e->ignore();
}

void Title_Bar::mouseMoveEvent( QMouseEvent *e )
{
    if (left_pressed_ && !is_maxed_)
    {
        window()->move(e->globalPos() - click_pos_);
        e->accept();
    }else{
        e->ignore();
    }
}

void Title_Bar::mouseReleaseEvent( QMouseEvent *e )
{
    left_pressed_ = false;
    e->ignore();
}

void Title_Bar::show_small()
{
    window()->showMinimized();
}

void Title_Bar::mouseDoubleClickEvent( QMouseEvent *e )
{
    if (show_style_ & SHOW_MAX_BUTTON)
    {
        show_max_restore();
        left_pressed_ = false;
    }
}

void Title_Bar::set_show_style( int style )
{
    show_style_ = style;

    icon_->setVisible(show_style_ & SHOW_ICON);
    title_->setVisible(show_style_ & SHOW_TITLE);
    min_button_->setVisible(show_style_ & SHOW_MIN_BUTTON);
    max_button_->setVisible(show_style_ & SHOW_MAX_BUTTON);
    close_button_->setVisible(show_style_ & SHOW_CLOSE_BUTTON);
}

void Title_Bar::paintEvent( QPaintEvent *e )
{
    QWidget::paintEvent(e);

    if (show_style_ & DRAW_BACKGROUND)
    {
        const Border_Image& bi = skin_->titlebar_background();

        QPainter painter(this);
        qDrawBorderPixmap(&painter, rect(), bi.border(), bi.pixmap());
    }
}

void Title_Bar::fix_height_to_background()
{
    const Border_Image& bi = skin_->titlebar_background();
    int h = bi.pixmap().height();
    if (h > 0)
    {
        setFixedHeight(h);
    }
}

//////////////////////////////////////////////////////////////////////////

Main_Title_Bar::Main_Title_Bar( QWidget* parent, Skin *skin )
    :Title_Bar(parent, skin)
{
    skin_button_ = new State_Button(this);
    menu_button_ = new State_Button(this);

    skin_button_->setObjectName("title_bar_skin");
    menu_button_->setObjectName("title_bar_menu");

    load_skin_internal();
    init();
}

Main_Title_Bar::~Main_Title_Bar()
{
}

void Main_Title_Bar::init()
{
    int index = hbox_layout_->indexOf(min_button_);
    hbox_layout_->insertWidget(index, menu_button_, 0, Qt::AlignTop);
    hbox_layout_->insertWidget(index, skin_button_, 0, Qt::AlignTop);

    set_show_style(MAIN_FORM_SKIN_STYLE);

    //
    connect(skin_button_, SIGNAL(clicked()), this, SIGNAL(skin_clicked()));
    connect(menu_button_, SIGNAL(clicked()), this, SIGNAL(menu_clicked()));
}

void Main_Title_Bar::set_show_style( int style )
{
    Title_Bar::set_show_style(style);
    skin_button_->setVisible(show_style_ & SHOW_SKIN);
    menu_button_->setVisible(show_style_ & SHOW_MENU);
}

void Main_Title_Bar::load_skin(Skin* skin)
{
    Title_Bar::load_skin(skin);
    load_skin_internal();
}

void Main_Title_Bar::load_skin_internal()
{
    skin_button_->set_pixmap(skin_->skin_pixmap());
    menu_button_->set_pixmap(skin_->menu_pixmap());
}

//////////////////////////////////////////////////////////////////////////

