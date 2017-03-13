#ifndef SAFE360_MAIN_H
#define SAFE360_MAIN_H

#include "Base_Widget.h"
#include "Button_Bar.h"

#include <QtWidgets/QtWidgets>

class safe360_main : public Base_Widget<QWidget>
{
    Q_OBJECT

public:
    safe360_main(QWidget *parent=NULL);
    ~safe360_main();

    QRect background_rect() const;

private:
    void setup_button_bar();
    void setup_stackwidget(QStackedWidget *stackedWidget);
    void setup_statusbar(QWidget* statusbar);
    void create_menu();

private slots:
    void button_clicked(int i);
    void navigate_home();
    void show_main_menu();
    void show_setting_dialog();

private:
    Button_Bar      *button_bar_;
    QStackedWidget  *stacked_widget_;
    QWidget         *status_bar_;
    QMenu           *menu_;
};

#endif // SAFE360_MAIN_H
