#ifndef SAFE360_SETTING_H
#define SAFE360_SETTING_H

#include "Base_Widget.h"
#include "ui_dailog.h"


class safe360_setting : public Base_Widget<QDialog>
{
    Q_OBJECT
public:
    safe360_setting(QWidget *parent=NULL, Skin *skin=NULL);
    ~safe360_setting();

private slots:
     void button_clicked(QAbstractButton * button);

private:
    Ui::SettingDialog ui;
};

#endif // SAFE360_SETTING_H
