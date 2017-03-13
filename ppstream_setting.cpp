#include "ppstream_setting.h"


#include "State_Button.h"
#include <QtWidgets/QButtonGroup>

State_Button* create_state_button(QWidget* parent)
{
    State_Button* x = new State_Button(parent);
    x->load_background(":/images/pps/soft_setting_tab.png", 5);
    x->setStyleSheet("text-align:left; padding-left:20px;background:transparent;");
    x->setFixedSize(106, 29);
    x->setCheckable(true);
    x->setAutoExclusive(true);
    return x;
}

ppstream_setting::ppstream_setting(QWidget *parent, Skin* skin)
    : Base_Widget<QDialog>(parent, skin)
{
    this->title_bar_->set_show_style(Title_Bar::SHOW_CLOSE_BUTTON);

    QWidget *content = new QWidget(this);

    ui_.setupUi(content);

    QButtonGroup* btn_group = new QButtonGroup(content);
    QWidget *btn_parent = content;
    btn_group->setExclusive(true);
    connect(btn_group, SIGNAL(buttonClicked(int)), this, SLOT(buttonClicked(int)));
    
    State_Button* btn1 = create_state_button(btn_parent);
    State_Button* btn2 = create_state_button(btn_parent);
    State_Button* btn3 = create_state_button(btn_parent);
    State_Button* btn4 = create_state_button(btn_parent);
    State_Button* btn5 = create_state_button(btn_parent);
    State_Button* btn6 = create_state_button(btn_parent);
    State_Button* btn7 = create_state_button(btn_parent);

    btn_group->addButton(btn1, 1);
    btn_group->addButton(btn2, 2);
    btn_group->addButton(btn3, 3);
    btn_group->addButton(btn4, 4);
    btn_group->addButton(btn5, 5);
    btn_group->addButton(btn6, 6);
    btn_group->addButton(btn7, 7);

    btn1->setText(QApplication::translate("Form", "\346\222\255\346\224\276\345\231\250", 0));
    btn2->setText(QApplication::translate("Form", "\351\237\263\351\242\221\350\276\223\345\207\272", 0));
    btn3->setText(QApplication::translate("Form", "\347\202\271\346\222\255\346\234\215\345\212\241", 0));
    btn4->setText(QApplication::translate("Form", "\350\247\206\351\242\221\344\270\213\350\275\275", 0));
    btn5->setText(QApplication::translate("Form", "\345\277\253\346\215\267\351\224\256", 0));
    btn6->setText(QApplication::translate("Form", "\347\274\223\345\255\230", 0));
    btn7->setText(QApplication::translate("Form", "\345\205\266\345\256\203", 0));
 
    while (ui_.button_layout->count() > 0)
    {
        QLayoutItem *item = ui_.button_layout->takeAt(0);
        delete item->widget();
        delete item;
    } 

    ui_.button_layout->addWidget(btn1);                                      
    ui_.button_layout->addWidget(btn2);                                      
    ui_.button_layout->addWidget(btn3);                                      
    ui_.button_layout->addWidget(btn4);                                      
    ui_.button_layout->addWidget(btn5);                                      
    ui_.button_layout->addWidget(btn6);
    ui_.button_layout->addWidget(btn7); 
    
    ui_.button_layout->addStretch();

    layout_->addWidget(content);

    setFixedSize(542, 393);
}

ppstream_setting::~ppstream_setting()
{

}

#include "ppstream_main.h"
class Setting_Skin: public PPS_Skin
{
public:
    void load()
    {
        PPS_Skin::load();

        background_.load(":/images/pps/dialogBg.png", "4 38 4 4", "4 38 4 4");
        titlebar_background_.set_margin(0, 1, 0, 0);
    }
};

void ppstream_setting::show_setting(QWidget *parent)
{
    Setting_Skin skin;
    skin.load();

    ppstream_setting w(parent, &skin);
    w.exec();
}

void ppstream_setting::buttonClicked( int id )
{
    ui_.stackedWidget->setCurrentIndex(id - 1);
}

