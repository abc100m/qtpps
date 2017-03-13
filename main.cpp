#include "qt_button.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QtWidgets>
#include <QtWidgets/QGraphicsOpacityEffect>
#include "shapedwidget.h"
#include "Base_Widget.h"
#include "Base_Dialog.h"
#include "safe360_main.h"
#include "ppstream_main.h"

#include "ppstream_setting.h"

#include <QtPlugin>
//Q_IMPORT_PLUGIN(QPSQLDriverPlugin)
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
/*
    //仿360界面
    safe360_main w;
    w.resize(850, 607);
    w.show();
*/

    //仿ppstream界面
    PPS_Skin *skin = new PPS_Skin();
    skin->load();
    Skin::instance(skin);

    ppstream_main w;
    w.show();

    return a.exec();
}
