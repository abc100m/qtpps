#include "ppstream_tab.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QApplication>
#include <QListWidget>
#include <QLabel>

#include "Button_LineEdit.h"
#include "State_Button.h"
#include "QSS_Widget.h"

//显示一个电影
class movie_widget: public QSS_Widget
{
public:
    movie_widget(QWidget *parent = 0): QSS_Widget(parent)
    {
        //setAutoFillBackground(true);
        create_child();
        setFixedHeight(92);

        pic_->setScaledContents(true);
        movie_type_->setStyleSheet("color:white;");
        title_->setStyleSheet("color:white;");
        watched_->setStyleSheet("color:white;");
    }

    void set_content(const QString& image_url,  const QString& title, 
                     const QString& movie_type, const QString& watched
                    )
    {
        QPixmap pixmap;
        pixmap.load(image_url);

        pic_->setPixmap(pixmap);
        title_->setText(title);
        movie_type_->setText(QString::fromLocal8Bit("类型:") + movie_type);
        watched_->setText(QString::fromLocal8Bit("观看到:") + watched);
    }

    QSize sizeHint() const 
    {
        return QSize(92, 264);
    }

protected:
    void enterEvent(QEvent *e)
    {
        setStyleSheet("QWidget{background-color:#111111}");
        title_->setStyleSheet("color:#F27923");
    }

    void leaveEvent(QEvent *e)
    {
        setStyleSheet("QWidget{background-color:#292929}");
        title_->setStyleSheet("color:#FFFFFF");
    }

private:
    void create_child()
    {
        pic_ = new QLabel(this);  
        pic_->setFixedSize(60, 80);
        title_ = new QLabel(this);
        title_->setText("     ");
        movie_type_ = new QLabel(this);
        movie_type_->setText("     ");
        watched_ = new QLabel(this);
        watched_->setText("      ");

        State_Button *btn = new State_Button(this);
        btn->load_pximap(":/images/pps/left_list_del.png");

        QVBoxLayout *v = new QVBoxLayout();
        v->setContentsMargins(2, 2, 2, 2);
        v->addWidget(title_);
        v->addWidget(movie_type_);
        v->addWidget(watched_);
        v->addStretch();

        QVBoxLayout *btn_layout = new QVBoxLayout();
        btn_layout->setContentsMargins(2, 2, 2, 2);
        btn_layout->addWidget(btn);
        btn_layout->addStretch();

        QHBoxLayout* layout = new QHBoxLayout();
        layout->addWidget(pic_, 0, Qt::AlignVCenter);
        layout->addLayout(v);
        layout->addStretch();
        layout->addLayout(btn_layout);

        layout->setContentsMargins(2, 2, 2, 2);
        layout->setSpacing(2);

        setLayout(layout);
    }

private:
    QLabel *pic_;
    QLabel *title_;
    QLabel *movie_type_;
    QLabel *watched_;
};


homepage_tab::homepage_tab( QWidget *parent/*=0*/ )
    :QSS_Widget(parent)
{
    QVBoxLayout *layout_ = new QVBoxLayout();
    layout_->setSpacing(0);
    layout_->setContentsMargins(0, 0, 0, 0);

    QHBoxLayout *top_layout = new QHBoxLayout();
    top_layout->setSpacing(0);
    top_layout->setContentsMargins(5, 5, 5, 5);

    Clear_LineEdit *edit = new Clear_LineEdit(this);
    edit->setPlaceholderText(QString::fromLocal8Bit("搜索视频..."));
    edit->setFixedHeight(20);

    State_Button   *search = new State_Button(this);
    search->load_pximap(QStringLiteral(":/images/pps/findbtn.png"));

    QTreeWidget *tree = create_tree();
   // tree->setStyleSheet("  ");
    tree->setStyleSheet("QTreeView{background-color:#1b1b1b; color:white; border:none;} QHeaderView::section {background-color:qlineargradient(x1:0, y1:0, x2:0, y2:1,stop:0 #616161, stop: 0.5 #505050,stop: 0.6 #434343, stop:1 #656565);  color: white; padding-left: 4px; border: 1px solid #6c6c6c; }");


    top_layout->addWidget(edit, 1);
    top_layout->addWidget(search);

    layout_->addLayout(top_layout);
    layout_->addWidget(tree, 1);

    setLayout(layout_);
}

homepage_tab::~homepage_tab()
{

}

QTreeWidget* homepage_tab::create_tree()
{
    QTreeWidget *treeWidget = new QTreeWidget(this);
    QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
    new QTreeWidgetItem(__qtreewidgetitem);
    new QTreeWidgetItem(__qtreewidgetitem);
    new QTreeWidgetItem(__qtreewidgetitem);
    new QTreeWidgetItem(treeWidget);
    new QTreeWidgetItem(treeWidget);
    new QTreeWidgetItem(treeWidget);
    new QTreeWidgetItem(treeWidget);
    new QTreeWidgetItem(treeWidget);
    treeWidget->setObjectName(QStringLiteral("treeWidget"));
    treeWidget->setIndentation(20);
    treeWidget->setSortingEnabled(false);

    QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
    ___qtreewidgetitem->setText(2, QApplication::translate("qt_buttonClass", "\350\247\202\344\274\227", 0));
    ___qtreewidgetitem->setText(1, QApplication::translate("qt_buttonClass", "\345\210\227\350\241\250", 0));
    ___qtreewidgetitem->setText(0, QApplication::translate("qt_buttonClass", "\345\205\261774290\344\270\252\350\247\206\351\242\221", 0));

    const bool __sortingEnabled = treeWidget->isSortingEnabled();
    treeWidget->setSortingEnabled(false);
    QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
    ___qtreewidgetitem1->setText(0, QApplication::translate("qt_buttonClass", "\346\234\200\346\226\260\346\233\264\346\226\260", 0));
    QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
    ___qtreewidgetitem2->setText(0, QApplication::translate("qt_buttonClass", "\345\215\216\350\257\255\345\211\247\345\234\272", 0));
    QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
    ___qtreewidgetitem3->setText(0, QApplication::translate("qt_buttonClass", "\347\273\274\350\211\272\345\250\261\344\271\220", 0));
    QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
    ___qtreewidgetitem4->setText(0, QApplication::translate("qt_buttonClass", "\344\270\255\345\233\275\345\220\210\344\274\231\344\272\272", 0));
    QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
    ___qtreewidgetitem5->setText(0, QApplication::translate("qt_buttonClass", "\346\255\243\345\234\250\347\233\264\346\222\255", 0));
    QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(2);
    ___qtreewidgetitem6->setText(0, QApplication::translate("qt_buttonClass", "\345\206\205\345\234\260\345\211\247\345\234\272", 0));
    QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(3);
    ___qtreewidgetitem7->setText(0, QApplication::translate("qt_buttonClass", "\346\257\217\346\227\245\347\204\246\347\202\271", 0));
    QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(4);
    ___qtreewidgetitem8->setText(0, QApplication::translate("qt_buttonClass", "\346\270\257\345\217\260\345\211\247\345\234\272", 0));
    QTreeWidgetItem *___qtreewidgetitem9 = treeWidget->topLevelItem(5);
    ___qtreewidgetitem9->setText(0, QApplication::translate("qt_buttonClass", "2013\345\277\253\344\271\220\347\224\267\345\243\260", 0));
    treeWidget->setSortingEnabled(__sortingEnabled);

    treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    return treeWidget;
}

//////////////////////////////////////////////////////////////////////////

history_tab::history_tab( QWidget *parent/*=0*/ )
    :QSS_Widget(parent)
{
    setStyleSheet("QWidget{background-color:#292929;}");

    //QListWidget *movies = new QListWidget(this);
    //movies->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //movies->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    //movies->setAutoScroll(false);
    //movies->setSelectionMode(QAbstractItemView::NoSelection);
    //movies->setFrameShape(QFrame::NoFrame);
    //movies->setWordWrap(true);

    //QListWidgetItem *item1 = new QListWidgetItem();
    //QListWidgetItem *item2 = new QListWidgetItem();

    movie_widget *m1 = new movie_widget();
    m1->set_content(":/images/pps/movie_pic1.png", 
                    QString::fromLocal8Bit("C+侦探-粤"),
                    QString::fromLocal8Bit("悬疑|惊怵"),
                    QString::fromLocal8Bit("0:00:00")
                   );

    movie_widget *m2 = new movie_widget();
    m2->set_content(":/images/pps/movie_pic2.png", 
                    QString::fromLocal8Bit("全职杀手(刘德华反町隆史)-粤"),
                    QString::fromLocal8Bit("未知"),
                    QString::fromLocal8Bit("0:00:00")
                   );

    //搞个假的，看上去好看. QListWidget待慢慢研究
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setContentsMargins(0, 0, 0, 0);
    layout->setSpacing(2);
    layout->addWidget(m1);
    layout->addWidget(m2);
    layout->addStretch(1);
    setLayout(layout);

    //item1->setSizeHint(m1->sizeHint());
    //movies->addItem(item1);
    //movies->setItemWidget(item1, m1);

    //item2->setSizeHint(m2->sizeHint());
    //movies->addItem(item2);
    //movies->setItemWidget(item2, m2);

    //QVBoxLayout* xx = new QVBoxLayout();
    //xx->setContentsMargins(0, 0, 0, 0);
    //xx->addWidget(movies, 1);
    //setLayout(xx);
}

history_tab::~history_tab()
{

}
//////////////////////////////////////////////////////////////////////////

favorite_tab::favorite_tab( QWidget *parent/*=0*/ )
    :QSS_Widget(parent)
{

}

favorite_tab::~favorite_tab()
{

}
//////////////////////////////////////////////////////////////////////////

download_tab::download_tab( QWidget *parent/*=0*/ )
    :QSS_Widget(parent)
{

}

download_tab::~download_tab()
{

}
