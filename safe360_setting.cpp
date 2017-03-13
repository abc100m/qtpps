#include "safe360_setting.h"

safe360_setting::safe360_setting(QWidget *parent, Skin *skin)
    : Base_Widget<QDialog>(parent, skin)
{
    setWindowTitle(QString::fromLocal8Bit("设置"));
    QWidget* p = new QWidget(this);
    ui.setupUi(p);
    resize(p->size());
    layout_->addWidget(p);

    ui.buttonBox->button(QDialogButtonBox::Ok)->setText(QString::fromLocal8Bit("确定"));
    ui.buttonBox->button(QDialogButtonBox::Cancel)->setText(QString::fromLocal8Bit("取消"));

    connect(ui.buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(button_clicked(QAbstractButton*)));
}

safe360_setting::~safe360_setting()
{

}

void safe360_setting::button_clicked( QAbstractButton * button )
{
    if (button == ui.buttonBox->button(QDialogButtonBox::Ok))
    {
        close();
    }
    else if (button == ui.buttonBox->button(QDialogButtonBox::Cancel))
    {
        close();
    }
}
