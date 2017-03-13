#ifndef PPSTREAM_SETTING_H
#define PPSTREAM_SETTING_H

#include "Base_Widget.h"
#include "ui_pps_setting_dialog.h"

class ppstream_setting : public Base_Widget<QDialog>
{
    Q_OBJECT

public:
    ppstream_setting(QWidget *parent=0, Skin* skin=0);
    ~ppstream_setting();

private slots:
    void buttonClicked(int id);

public:
    static void show_setting(QWidget *parent);

private:
    Ui::Form ui_;
};

#endif // PPSTREAM_SETTING_H
