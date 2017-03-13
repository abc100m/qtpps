/********************************************************************************
** Form generated from reading UI file 'Button_Bar.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_BAR_H
#define UI_BUTTON_BAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Button_Bar
{
public:
    QWidget *status_bar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;

    void setupUi(QWidget *Button_Bar)
    {
        if (Button_Bar->objectName().isEmpty())
            Button_Bar->setObjectName(QStringLiteral("Button_Bar"));
        Button_Bar->resize(618, 383);
        Button_Bar->setAutoFillBackground(false);
        Button_Bar->setStyleSheet(QStringLiteral("#Button_Bar{border-image: url(:/images/bg/bg.png);}"));
        status_bar = new QWidget(Button_Bar);
        status_bar->setObjectName(QStringLiteral("status_bar"));
        status_bar->setGeometry(QRect(20, 190, 611, 101));
        status_bar->setStyleSheet(QStringLiteral("border-image: url(:/images/rabbit.png) stretch;"));
        layoutWidget = new QWidget(status_bar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 1201, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(30, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background:transparent;"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(Button_Bar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 100, 161, 81));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/images/rabbit.png) stretch;"));
        label_3->setLineWidth(0);

        retranslateUi(Button_Bar);

        QMetaObject::connectSlotsByName(Button_Bar);
    } // setupUi

    void retranslateUi(QWidget *Button_Bar)
    {
        Button_Bar->setWindowTitle(QApplication::translate("Button_Bar", "Button_Bar", 0));
        label_2->setText(QApplication::translate("Button_Bar", "\344\270\273\347\250\213\345\272\217\347\211\210\346\234\254:4.6.0.3627", 0));
        label->setText(QApplication::translate("Button_Bar", "\346\234\254\345\234\260\346\234\250\351\251\254\345\272\223:2013.7.30.17", 0));
        label_4->setText(QApplication::translate("Button_Bar", "TextLabel", 0));
        label_3->setText(QApplication::translate("Button_Bar", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Button_Bar: public Ui_Button_Bar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_BAR_H
