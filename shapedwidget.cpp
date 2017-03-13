#include "shapedwidget.h"
#include <QtGui>
#include <QtWidgets/QAction>

/** public: */
ShapedWidget::ShapedWidget(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint)
{
    initData();
    initVisualComponents();
    setupContextMenu();
    setAttribute(Qt::WA_DeleteOnClose);
    setAttribute(Qt::WA_TranslucentBackground);
}

ShapedWidget::~ShapedWidget()
{
    delete dragPos_;
    delete backgroundPixmap_;
}

/** private slots: */
void ShapedWidget::changeSkin()
{
    QAction* source = qobject_cast<QAction*>(sender());
    backgroundPixmap_->load(source->data().toString());
    resize(backgroundPixmap_->width(), backgroundPixmap_->height());
    clearMask();
    setMask(backgroundPixmap_->mask());
    update();
}

/** private: */
void ShapedWidget::initData()
{
    dragPos_ = new QPoint;
    backgroundPixmap_ = new QPixmap(":/images/yoda.png");
}

void ShapedWidget::initVisualComponents()
{
    this->setObjectName(tr("Shaped Widget"));
    this->setWindowTitle(tr("Shaped widget using setMask() function"));
    resize(backgroundPixmap_->width(), backgroundPixmap_->height());
    this->setMask(backgroundPixmap_->mask());
}

void ShapedWidget::setupContextMenu()
{
    setContextMenuPolicy(Qt::ActionsContextMenu);
    QAction *act_yoda = new QAction(QIcon(":/images/yoda.png"), tr("Yoda"), this);
    act_yoda->setData(tr(":/images/yoda.png"));
    QAction *act_rabbit = new QAction(QIcon(":/images/rabbit.png"), tr("Rabbit"), this);
    act_rabbit->setData(tr(":/images/rabbit.png"));
    QAction *act_cyclops = new QAction(QIcon(":/images/cyclops.png"), tr("Cyclops"), this);
    act_cyclops->setData(tr(":/images/cyclops.png"));
    QAction *act_star_beast = new QAction(QIcon(":/images/star_beast.png"), tr("Star Beast"), this);
    act_star_beast->setData(tr(":/images/star_beast.png"));

    QAction *act_quit = new QAction(tr("&Quit"), this);
    addAction(act_yoda);
    addAction(act_rabbit);
    addAction(act_cyclops);
    addAction(act_star_beast);
    addAction(act_quit);

    connect(act_yoda, SIGNAL(triggered()), this, SLOT(changeSkin()));
    connect(act_rabbit, SIGNAL(triggered()), this, SLOT(changeSkin()));
    connect(act_cyclops, SIGNAL(triggered()), this, SLOT(changeSkin()));
    connect(act_star_beast, SIGNAL(triggered()), this, SLOT(changeSkin()));
    connect(act_quit, SIGNAL(triggered()), this, SLOT(close()));
}


/** protected: */
void ShapedWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        *dragPos_ = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void ShapedWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - *dragPos_);
        event->accept();
    }
}

void ShapedWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.fillRect(0, 0, backgroundPixmap_->width(), backgroundPixmap_->height(), *backgroundPixmap_);
}
