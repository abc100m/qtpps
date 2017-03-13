#include "qt_button.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsOpacityEffect>
#include "shapedwidget.h"

int main_sahpe(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ShapedWidget *widget = new ShapedWidget;
    widget->show();

    return a.exec();
}
