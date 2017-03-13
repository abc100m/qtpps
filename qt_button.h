#ifndef QT_BUTTON_H
#define QT_BUTTON_H

#include <QtWidgets/QMainWindow>
#include "ui_qt_button.h"

#include "MoveFramelessWindow.h"

class qt_button : public QMainWindow//MoveFramelessWindow<QMainWindow>
{
    Q_OBJECT

public:
    qt_button(QWidget *parent = 0);
    ~qt_button();

private:
    Ui::qt_buttonClass ui;
};

#endif // QT_BUTTON_H
