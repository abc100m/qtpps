/********************************************************************************
** Form generated from reading UI file 'dailog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAILOG_H
#define UI_DAILOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QVBoxLayout *verticalLayout_16;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_10;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_16;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_17;
    QLabel *label_4;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *checkBox_18;
    QSpacerItem *verticalSpacer_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QStringLiteral("SettingDialog"));
        SettingDialog->resize(560, 400);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        SettingDialog->setFont(font);
        SettingDialog->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold; color:green;}"));
        verticalLayout_16 = new QVBoxLayout(SettingDialog);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        tabWidget = new QTabWidget(SettingDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane{border: 0px;}\n"
"QTabWidget::tab-bar{alignment:center;}\n"
"QTabBar::tab{background:transparent; color:white; min-width:30ex; min-height:10ex;}\n"
"QTabBar::tab:hover{background:rgb(255, 255, 255, 100);}\n"
"QTabBar::tab:selected{border-color: white;background:white;color:green;}  "));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_12 = new QVBoxLayout(tab);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(15, 15, 15, 30);
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 9, -1, -1);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, -1, -1);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setTristate(false);

        horizontalLayout->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);


        verticalLayout_12->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, 15, 15, 30);
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(30, -1, -1, -1);
        checkBox_6 = new QCheckBox(groupBox_2);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        verticalLayout_3->addWidget(checkBox_6);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, -1, -1, -1);
        checkBox_7 = new QCheckBox(groupBox_3);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setCheckable(true);

        verticalLayout_4->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(groupBox_3);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));

        verticalLayout_4->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(groupBox_3);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));

        verticalLayout_4->addWidget(checkBox_9);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(30, -1, -1, -1);
        checkBox_10 = new QCheckBox(groupBox_4);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));

        verticalLayout_5->addWidget(checkBox_10);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        verticalLayout_2->setStretch(0, 26);
        verticalLayout_2->setStretch(1, 42);
        verticalLayout_2->setStretch(2, 26);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_6 = new QVBoxLayout(tab_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(15, 15, 15, 30);
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(30, -1, -1, -1);
        radioButton_3 = new QRadioButton(groupBox_5);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_7->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_5);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_7->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(groupBox_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        verticalLayout_7->addWidget(radioButton_5);


        verticalLayout_6->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(30, -1, -1, -1);
        radioButton_6 = new QRadioButton(groupBox_6);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        verticalLayout_8->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBox_6);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        verticalLayout_8->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBox_6);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        verticalLayout_8->addWidget(radioButton_8);


        verticalLayout_6->addWidget(groupBox_6);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_8);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_9 = new QVBoxLayout(tab_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(15, 15, 15, 30);
        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_10 = new QVBoxLayout(groupBox_7);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(30, -1, -1, -1);
        checkBox_11 = new QCheckBox(groupBox_7);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));

        verticalLayout_10->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(groupBox_7);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));

        verticalLayout_10->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(groupBox_7);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));

        verticalLayout_10->addWidget(checkBox_13);

        checkBox_14 = new QCheckBox(groupBox_7);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));

        verticalLayout_10->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(groupBox_7);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));

        verticalLayout_10->addWidget(checkBox_15);


        verticalLayout_9->addWidget(groupBox_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_11 = new QVBoxLayout(tab_5);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(15, 15, 15, 30);
        groupBox_8 = new QGroupBox(tab_5);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(30, -1, -1, -1);
        checkBox_16 = new QCheckBox(groupBox_8);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));

        horizontalLayout_3->addWidget(checkBox_16);

        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::OpenHandCursor));
        label->setAlignment(Qt::AlignCenter);
        label->setOpenExternalLinks(true);

        horizontalLayout_3->addWidget(label);


        verticalLayout_11->addWidget(groupBox_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_13 = new QVBoxLayout(tab_6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(15, 15, 15, 30);
        groupBox_9 = new QGroupBox(tab_6);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_14 = new QVBoxLayout(groupBox_9);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(20, -1, -1, -1);
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        verticalLayout_14->addWidget(label_5);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_17 = new QCheckBox(groupBox_9);
        checkBox_17->setObjectName(QStringLiteral("checkBox_17"));

        horizontalLayout_2->addWidget(checkBox_17);

        label_4 = new QLabel(groupBox_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_14->addLayout(horizontalLayout_2);


        verticalLayout_13->addWidget(groupBox_9);

        groupBox_10 = new QGroupBox(tab_6);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        verticalLayout_15 = new QVBoxLayout(groupBox_10);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(20, -1, -1, -1);
        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setWordWrap(true);

        verticalLayout_15->addWidget(label_3);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_6);

        checkBox_18 = new QCheckBox(groupBox_10);
        checkBox_18->setObjectName(QStringLiteral("checkBox_18"));

        verticalLayout_15->addWidget(checkBox_18);


        verticalLayout_13->addWidget(groupBox_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_6, QString());

        verticalLayout_16->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(SettingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_16->addWidget(buttonBox);


        retranslateUi(SettingDialog);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "\350\256\276\347\275\256", 0));
        groupBox->setTitle(QApplication::translate("SettingDialog", "\345\215\207\347\272\247\346\226\271\345\274\217", 0));
        radioButton->setText(QApplication::translate("SettingDialog", "\350\207\252\345\212\250\345\215\207\347\272\247\344\270\273\347\250\213\345\272\217\345\222\214\345\244\207\347\224\250\346\234\250\351\251\254\345\272\223\345\210\260\346\234\200\346\226\260\347\211\210", 0));
        radioButton_2->setText(QApplication::translate("SettingDialog", "\344\270\215\350\207\252\345\212\250\345\215\207\347\272\247", 0));
        checkBox->setText(QApplication::translate("SettingDialog", "\344\270\215\345\215\207\347\272\247\344\270\273\347\250\213\345\272\217\357\274\214\344\275\206\344\273\215\345\215\207\347\272\247\345\244\207\347\224\250\347\250\213\345\272\217", 0));
        checkBox_2->setText(QApplication::translate("SettingDialog", "\346\270\270\346\210\217\346\227\266\344\270\215\345\215\207\347\272\247", 0));
        checkBox_3->setText(QApplication::translate("SettingDialog", "3G\344\270\212\347\275\221\346\227\266\344\270\215\345\215\207\347\272\247", 0));
        checkBox_4->setText(QApplication::translate("SettingDialog", "\344\275\277\347\224\250P2P/P2S\346\212\200\346\234\257\344\270\272\345\215\207\347\272\247\347\250\213\345\272\217\345\212\240\351\200\237", 0));
        checkBox_5->setText(QApplication::translate("SettingDialog", "\345\244\207\347\224\250\346\234\250\351\251\254\345\272\223\345\215\207\347\272\247\345\256\214\346\210\220\345\220\216\345\234\250\345\217\263\344\270\213\350\247\222\346\217\220\347\244\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingDialog", "\345\215\207\347\272\247\346\226\271\345\274\217", 0));
        groupBox_2->setTitle(QApplication::translate("SettingDialog", "\346\234\250\351\251\254\351\230\262\347\201\253\345\242\231", 0));
        checkBox_6->setText(QApplication::translate("SettingDialog", "\345\274\200\346\234\272\346\227\266\350\207\252\345\212\250\345\220\257\345\212\250\346\234\250\351\251\254\351\230\262\347\201\253\345\242\231", 0));
        groupBox_3->setTitle(QApplication::translate("SettingDialog", "\345\217\263\351\224\256\350\217\234\345\215\225", 0));
        checkBox_7->setText(QApplication::translate("SettingDialog", "\346\212\212\342\200\234\350\247\243\351\231\244\345\215\240\347\224\250\342\200\235\346\267\273\345\212\240\345\210\260\345\217\263\351\224\256\350\217\234\345\215\225", 0));
        checkBox_8->setText(QApplication::translate("SettingDialog", "\346\212\212\342\200\234\345\274\272\345\212\233\345\210\240\351\231\244\342\200\235\346\267\273\345\212\240\345\210\260\345\217\263\351\224\256\350\217\234\345\215\225", 0));
        checkBox_9->setText(QApplication::translate("SettingDialog", "\346\212\212\342\200\234\346\234\250\351\251\254\344\272\221\346\237\245\346\235\200\342\200\235\346\267\273\345\212\240\345\210\260\345\217\263\351\224\256\350\217\234\345\215\225", 0));
        groupBox_4->setTitle(QApplication::translate("SettingDialog", "\350\275\257\344\273\266\347\256\241\345\256\266", 0));
        checkBox_10->setText(QApplication::translate("SettingDialog", "\345\234\250360\345\256\211\345\205\250\345\215\253\345\243\253\344\270\273\347\225\214\351\235\242\346\230\276\347\244\272\350\275\257\344\273\266\345\215\207\347\272\247\346\225\260", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingDialog", "\351\253\230\347\272\247\350\256\276\347\275\256", 0));
        groupBox_5->setTitle(QApplication::translate("SettingDialog", "\351\242\221\345\272\246\350\256\276\347\275\256", 0));
        radioButton_3->setText(QApplication::translate("SettingDialog", "\346\257\217\346\254\241\345\220\257\345\212\250\345\235\207\350\207\252\345\212\250\350\277\233\350\241\214\346\243\200\346\237\245", 0));
        radioButton_4->setText(QApplication::translate("SettingDialog", "\346\257\217\346\254\241\344\273\205\351\246\226\346\254\241\350\277\233\345\205\245360\346\227\266\350\277\233\350\241\214\346\243\200", 0));
        radioButton_5->setText(QApplication::translate("SettingDialog", "\346\211\213\345\212\250\350\277\233\350\241\214\344\275\223\346\243\200", 0));
        groupBox_6->setTitle(QApplication::translate("SettingDialog", "\351\200\200\345\207\272\346\226\271\345\274\217\350\256\276\347\275\256", 0));
        radioButton_6->setText(QApplication::translate("SettingDialog", "\346\217\220\347\244\272\346\210\221\351\200\200\345\207\272\346\226\271\345\274\217", 0));
        radioButton_7->setText(QApplication::translate("SettingDialog", "\347\233\264\346\216\245\350\277\233\345\205\245\345\220\216\345\217\260\346\250\241\345\274\217", 0));
        radioButton_8->setText(QApplication::translate("SettingDialog", "\347\233\264\346\216\245\345\205\263\351\227\255\345\215\253\345\243\253", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingDialog", "\344\275\223\351\252\214\350\256\276\347\275\256", 0));
        groupBox_7->setTitle(QApplication::translate("SettingDialog", "\347\224\250\346\210\267\347\255\211\347\272\247\345\222\214\344\273\273\345\212\241\350\256\276\347\275\256", 0));
        checkBox_11->setText(QApplication::translate("SettingDialog", "\345\256\214\346\210\220\344\273\273\345\212\241\346\227\266\346\230\276\347\244\272\350\216\267\345\217\226\347\273\217\351\252\214\345\200\274\347\232\204\345\212\250\346\200\201\346\217\220\351\206\222", 0));
        checkBox_12->setText(QApplication::translate("SettingDialog", "\350\207\252\345\212\250\347\231\273\345\275\225\345\220\216\346\230\276\347\244\272\347\231\273\345\275\225\346\217\220\351\206\222\347\252\227\345\217\243", 0));
        checkBox_13->setText(QApplication::translate("SettingDialog", "\345\234\250\346\211\230\347\233\230\351\200\200\345\207\272\345\220\216\346\217\220\347\244\272", 0));
        checkBox_14->setText(QApplication::translate("SettingDialog", "\346\234\211\346\226\260\347\211\271\346\235\203\346\227\266\346\217\220\347\244\272", 0));
        checkBox_15->setText(QApplication::translate("SettingDialog", "\345\215\207\347\272\247\346\227\266\346\217\220\347\244\272\347\252\227\345\217\243", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SettingDialog", "\347\224\250\346\210\267\350\256\276\347\275\256", 0));
        groupBox_8->setTitle(QApplication::translate("SettingDialog", "\346\224\271\345\226\204\350\256\241\345\210\222", 0));
        checkBox_16->setText(QApplication::translate("SettingDialog", "\345\217\202\345\212\240\"360\347\224\250\346\210\267\344\275\223\351\252\214\346\224\271\345\226\204\350\256\241\345\210\222\"", 0));
        label->setText(QApplication::translate("SettingDialog", "<a href=\"http://www.csdn.net\">\344\272\206\350\247\243\350\257\246\346\203\205</a>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SettingDialog", "\346\224\271\345\226\204\350\256\241\345\210\222", 0));
        groupBox_9->setTitle(QApplication::translate("SettingDialog", "\346\226\207\344\273\266\344\272\221\345\256\211\345\205\250\350\256\241\345\210\222", 0));
        label_5->setText(QApplication::translate("SettingDialog", "    \344\270\272\344\272\206\345\277\253\351\200\237\351\230\262\345\276\241\346\234\200\346\226\260\345\207\272\347\216\260\347\232\204\346\234\250\351\251\254\347\227\205\346\257\222\357\274\214360\342\200\234\346\226\207\344\273\266\344\272\221\345\256\211\345\205\250\342\200\235\344\274\232\345\260\206\345\256\211\345\205\250\346\200\247\346\234\252\347\237\245\347\232\204\345\217\257\347\226\221\347\250\213\345\272\217\344\270\212\346\212\245\345\210\260\344\272\221\345\256\211\345\205\250\346\234\215\345\212\241\345\231\250\357\274\214\347\224\261\346\234\215\345\212\241\345\231\250\350\207\252\345\212\250\345\210\206\346\236\220\346\226\207\344\273\266\347\232\204\345\256\211\345\205\250\347\272\247\345\210\253\343\200\202\346\255\244\346\223\215\344\275\234\344\270\245\346\240\274\351\201\265\345\256\210\343\200\212360\347\224\250\346\210\267\351\232\220\347\247\201\344\277\235\346\212\244\346\211\277\350\257\272\343\200\213\357\274\214\344\270\215\346\266\211\345\217\212\347\224\250\346\210\267\351\232"
                        "\220\347\247\201\357\274\214\350\257\267\346\202\250\346\224\276\345\277\203\344\275\277\347\224\250\343\200\202", 0));
        checkBox_17->setText(QApplication::translate("SettingDialog", "\345\212\240\345\205\245\"360\346\226\207\344\273\266\344\272\221\345\256\211\345\205\250\350\256\241\345\210\222\"", 0));
        label_4->setText(QApplication::translate("SettingDialog", "<a href=\"http://bbs.csdn.net\">\346\237\245\347\234\213\351\232\220\347\247\201\346\211\277\350\257\272</a>", 0));
        groupBox_10->setTitle(QApplication::translate("SettingDialog", "\347\275\221\345\235\200\344\272\221\345\256\211\345\205\250\350\256\241\345\210\222", 0));
        label_3->setText(QApplication::translate("SettingDialog", "    \344\270\272\344\272\206\345\277\253\351\200\237\346\213\246\346\210\252\344\270\215\346\226\255\345\217\230\345\214\226\347\232\204\351\222\223\351\261\274\345\222\214\346\214\202\351\251\254\350\275\257\344\273\266\357\274\214360\342\200\234\347\275\221\345\235\200\344\272\221\345\256\211\345\205\250\342\200\235\344\274\232\346\217\220\344\272\244\345\217\257\347\226\221\347\275\221\345\235\200\345\210\260\344\272\221\345\256\211\345\205\250\346\234\215\345\212\241\345\231\250\357\274\214\347\224\261\346\234\215\345\212\241\345\231\250\345\257\271\345\217\257\347\226\221\347\275\221\345\235\200\350\277\233\350\241\214\351\222\223\351\261\274\345\222\214\346\214\202\351\251\254\347\275\221\347\253\231\351\211\264\345\256\232\343\200\202\346\255\244\346\223\215\344\275\234\344\270\245\346\240\274\351\201\265\345\256\210\343\200\212360\347\224\250\346\210\267\351\232\220\347\247\201\344\277\235\346\212\244\346\211\277\350\257\272\343\200\213\357\274\214\344\270\215\346\266\211\345\217\212\347\224\250\346\210"
                        "\267\351\232\220\347\247\201\357\274\214\350\257\267\346\202\250\346\224\276\345\277\203\344\275\277\347\224\250\343\200\202", 0));
        checkBox_18->setText(QApplication::translate("SettingDialog", "\345\212\240\345\205\245\"360\347\275\221\345\235\200\344\272\221\345\256\211\345\205\250\350\256\241\345\210\222\"", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("SettingDialog", "\344\272\221\345\256\211\345\205\250\350\256\241\345\210\222", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAILOG_H
