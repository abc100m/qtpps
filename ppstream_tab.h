#ifndef PPSTREAM_TAB_H
#define PPSTREAM_TAB_H

#include "QSS_Widget.h"
#include <QTreeWidget>

class homepage_tab: public QSS_Widget
{
    Q_OBJECT

public:
    homepage_tab(QWidget *parent=0);
    ~homepage_tab();

private:
    QTreeWidget* create_tree();
};

class history_tab: public QSS_Widget
{
    Q_OBJECT

public:
    history_tab(QWidget *parent=0);
    ~history_tab();
};

class favorite_tab: public QSS_Widget
{
    Q_OBJECT

public:
    favorite_tab(QWidget *parent=0);
    ~favorite_tab();
};

class download_tab: public QSS_Widget
{
    Q_OBJECT

public:
    download_tab(QWidget *parent=0);
    ~download_tab();
};




#endif // PPSTREAM_TAB_H
