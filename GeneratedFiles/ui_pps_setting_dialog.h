/********************************************************************************
** Form generated from reading UI file 'pps_setting_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PPS_SETTING_DIALOG_H
#define UI_PPS_SETTING_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *button_layout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QSpacerItem *verticalSpacer_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QSpacerItem *verticalSpacer_6;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_13;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_15;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_9;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_17;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(477, 351);
        verticalLayout_2 = new QVBoxLayout(Form);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_layout = new QVBoxLayout();
        button_layout->setSpacing(1);
        button_layout->setObjectName(QStringLiteral("button_layout"));
        btn1 = new QPushButton(Form);
        buttonGroup = new QButtonGroup(Form);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(btn1);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setMinimumSize(QSize(106, 29));
        btn1->setStyleSheet(QLatin1String("text-align:left; padding-left:20px;\n"
""));
        btn1->setCheckable(true);
        btn1->setAutoExclusive(true);
        btn1->setFlat(false);

        button_layout->addWidget(btn1);

        btn2 = new QPushButton(Form);
        buttonGroup->addButton(btn2);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setMinimumSize(QSize(106, 29));
        btn2->setCheckable(true);
        btn2->setAutoExclusive(true);

        button_layout->addWidget(btn2);

        btn3 = new QPushButton(Form);
        buttonGroup->addButton(btn3);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setMinimumSize(QSize(106, 29));
        btn3->setCheckable(true);
        btn3->setAutoExclusive(true);

        button_layout->addWidget(btn3);

        btn4 = new QPushButton(Form);
        buttonGroup->addButton(btn4);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setMinimumSize(QSize(106, 29));
        btn4->setCheckable(true);
        btn4->setAutoExclusive(true);

        button_layout->addWidget(btn4);

        btn5 = new QPushButton(Form);
        buttonGroup->addButton(btn5);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setMinimumSize(QSize(106, 29));
        btn5->setCheckable(true);
        btn5->setAutoExclusive(true);

        button_layout->addWidget(btn5);

        btn6 = new QPushButton(Form);
        buttonGroup->addButton(btn6);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setMinimumSize(QSize(106, 29));
        btn6->setCheckable(true);
        btn6->setAutoExclusive(true);

        button_layout->addWidget(btn6);

        btn7 = new QPushButton(Form);
        buttonGroup->addButton(btn7);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setMinimumSize(QSize(106, 29));
        btn7->setCheckable(true);
        btn7->setAutoExclusive(true);

        button_layout->addWidget(btn7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        button_layout->addItem(verticalSpacer_4);


        horizontalLayout->addLayout(button_layout);

        stackedWidget = new QStackedWidget(Form);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox->setFlat(true);
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_5->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_5->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout_5->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout_5->addWidget(checkBox_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color:red"));
        label_4->setWordWrap(false);

        horizontalLayout_2->addWidget(label_4);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color:red"));

        horizontalLayout_2->addWidget(label_5);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);


        verticalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_4->addWidget(groupBox);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_10 = new QVBoxLayout(page_3);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_2->setFlat(true);
        verticalLayout_8 = new QVBoxLayout(groupBox_2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_8->addWidget(label_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(comboBox_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        verticalLayout_10->addWidget(groupBox_2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_11 = new QVBoxLayout(page_4);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox_3 = new QGroupBox(page_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_3->setFlat(true);
        verticalLayout_12 = new QVBoxLayout(groupBox_3);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_12->addWidget(label_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(15, -1, -1, -1);
        radioButton_3 = new QRadioButton(groupBox_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_9->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout_9->addWidget(radioButton_4);


        verticalLayout_12->addLayout(verticalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(30, -1, -1, -1);
        lineEdit = new QLineEdit(groupBox_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 0));

        horizontalLayout_5->addWidget(lineEdit);

        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_12->addLayout(horizontalLayout_5);

        checkBox_5 = new QCheckBox(groupBox_3);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));

        verticalLayout_12->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(groupBox_3);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));

        verticalLayout_12->addWidget(checkBox_6);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);


        verticalLayout_11->addWidget(groupBox_3);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_14 = new QVBoxLayout(page_5);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        groupBox_4 = new QGroupBox(page_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_4->setFlat(true);
        verticalLayout_13 = new QVBoxLayout(groupBox_4);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));

        verticalLayout_14->addWidget(groupBox_4);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_16 = new QVBoxLayout(page_6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        groupBox_5 = new QGroupBox(page_6);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_5->setFlat(true);
        verticalLayout_15 = new QVBoxLayout(groupBox_5);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 6, 0, 0);
        tableWidget = new QTableWidget(groupBox_5);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem19);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout_15->addWidget(tableWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_6->addWidget(pushButton_9);


        verticalLayout_15->addLayout(horizontalLayout_6);


        verticalLayout_16->addWidget(groupBox_5);

        stackedWidget->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        verticalLayout_18 = new QVBoxLayout(page_7);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        groupBox_6 = new QGroupBox(page_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_6->setFlat(true);
        verticalLayout_17 = new QVBoxLayout(groupBox_6);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));

        verticalLayout_18->addWidget(groupBox_6);

        stackedWidget->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        verticalLayout_20 = new QVBoxLayout(page_8);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        groupBox_7 = new QGroupBox(page_8);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setStyleSheet(QStringLiteral("QGroupBox{font-weight:bold;}"));
        groupBox_7->setFlat(true);
        verticalLayout_19 = new QVBoxLayout(groupBox_7);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));

        verticalLayout_20->addWidget(groupBox_7);

        stackedWidget->addWidget(page_8);

        horizontalLayout->addWidget(stackedWidget);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Form);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_7->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(Form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        btn1->setText(QApplication::translate("Form", "\346\222\255\346\224\276\345\231\250", 0));
        btn2->setText(QApplication::translate("Form", "\351\237\263\351\242\221\350\276\223\345\207\272", 0));
        btn3->setText(QApplication::translate("Form", "\347\202\271\346\222\255\346\234\215\345\212\241", 0));
        btn4->setText(QApplication::translate("Form", "\350\247\206\351\242\221\344\270\213\350\275\275", 0));
        btn5->setText(QApplication::translate("Form", "\345\277\253\346\215\267\351\224\256", 0));
        btn6->setText(QApplication::translate("Form", "\347\274\223\345\255\230", 0));
        btn7->setText(QApplication::translate("Form", "\345\205\266\345\256\203", 0));
        groupBox->setTitle(QApplication::translate("Form", "\346\222\255\346\224\276\345\231\250", 0));
        checkBox->setText(QApplication::translate("Form", "\347\262\276\347\256\200\346\250\241\345\274\217\346\227\266\357\274\214\350\207\252\345\212\250\345\260\206\347\252\227\345\217\243\347\275\256\344\272\216\346\234\200\351\241\266\347\253\257\343\200\202", 0));
        checkBox_2->setText(QApplication::translate("Form", "\347\262\276\347\256\200\346\250\241\345\274\217\346\227\266\357\274\214\350\207\252\345\212\250\351\232\220\350\227\217\350\217\234\345\215\225\345\222\214\346\216\247\345\210\266\345\214\272\343\200\202", 0));
        checkBox_3->setText(QApplication::translate("Form", "\345\205\250\345\261\217\345\271\225\346\227\266...", 0));
        checkBox_4->setText(QApplication::translate("Form", "\347\246\201\346\255\242\345\261\217\345\271\225\344\277\235\346\212\244\345\222\214\347\224\265\346\272\220\347\256\241\347\220\206\343\200\202", 0));
        label->setText(QApplication::translate("Form", "\351\253\230\347\272\247\345\256\243\346\237\223", 0));
        label_4->setText(QApplication::translate("Form", "*", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Direct3D", 0)
         << QApplication::translate("Form", "DirectDraw", 0)
        );
        label_2->setText(QApplication::translate("Form", "\346\231\256\351\200\232\346\270\262\346\237\223", 0));
        label_5->setText(QApplication::translate("Form", "*", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Form", "\347\224\250VMR7\346\270\262\346\237\223", 0)
         << QApplication::translate("Form", "\347\224\250VMR9\346\270\262\346\237\223", 0)
         << QApplication::translate("Form", "\346\227\247\345\274\217\346\270\262\346\237\223\345\231\250", 0)
        );
        label_3->setText(QApplication::translate("Form", "\345\217\214\345\207\273\346\222\255\346\224\276\345\214\271\345\237\237\346\227\266:", 0));
        radioButton->setText(QApplication::translate("Form", "\345\205\250\345\261\217\345\271\225", 0));
        radioButton_2->setText(QApplication::translate("Form", "\347\262\276\347\256\200\346\250\241\345\274\217", 0));
        groupBox_2->setTitle(QApplication::translate("Form", "\351\237\263\351\242\221\350\276\223\345\207\272", 0));
        label_6->setText(QApplication::translate("Form", "\346\263\250\357\274\232\350\257\245\350\256\276\347\275\256\344\270\213\346\254\241\346\222\255\346\224\276\346\227\266\347\224\237\346\225\210", 0));
        label_7->setText(QApplication::translate("Form", "\350\276\223\345\207\272\350\256\276\345\244\207\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("Form", "\351\273\230\350\256\244\350\256\276\345\244\207", 0)
         << QApplication::translate("Form", "Speakers", 0)
        );
        groupBox_3->setTitle(QApplication::translate("Form", "\347\202\271\346\222\255\346\234\215\345\212\241", 0));
        label_8->setText(QApplication::translate("Form", "\347\274\223\345\255\230\346\226\207\344\273\266\347\256\241\347\220\206\357\274\232", 0));
        radioButton_3->setText(QApplication::translate("Form", "\350\207\252\345\212\250\347\256\241\347\220\206\347\274\223\345\255\230", 0));
        radioButton_4->setText(QApplication::translate("Form", "\346\211\213\345\212\250\347\256\241\347\220\206\347\274\223\345\255\230", 0));
        pushButton_8->setText(QApplication::translate("Form", "\346\233\264\346\224\271\347\233\256\345\275\225", 0));
        checkBox_5->setText(QApplication::translate("Form", "\345\205\201\350\256\270PPS\345\220\257\345\212\250\346\234\215\345\212\241\350\277\233\347\250\213", 0));
        checkBox_6->setText(QApplication::translate("Form", "\345\247\213\347\273\210\350\267\263\350\277\207\347\211\207\345\244\264\347\211\207\345\260\276", 0));
        groupBox_4->setTitle(QApplication::translate("Form", "\350\247\206\351\242\221\344\270\213\350\275\275", 0));
        groupBox_5->setTitle(QApplication::translate("Form", "\345\277\253\346\215\267\351\224\256", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "\345\212\237\350\203\275", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "\345\277\253\346\215\267\351\224\256", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "1", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "2", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Form", "3", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("Form", "4", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("Form", "5", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("Form", "6", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("Form", "\350\200\201\346\235\277\351\224\256", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("Form", "\346\234\252\350\256\276\347\275\256", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("Form", "\345\205\250\345\261\217/\351\200\200\345\207\272\345\205\250\345\261\217", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("Form", "Alt + Enter", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(2, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("Form", "\346\222\255\346\224\276/\346\232\202\345\201\234", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(2, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("Form", "Space", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(3, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("Form", "\345\201\234\346\255\242", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(3, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("Form", "Ctrl + S", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(4, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("Form", "\345\277\253\350\277\233", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(4, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("Form", "Right", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(5, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("Form", "\345\277\253\351\200\200", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(5, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("Form", "Left", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_9->setText(QApplication::translate("Form", "\346\201\242\345\244\215\351\273\230\350\256\244", 0));
        groupBox_6->setTitle(QApplication::translate("Form", "\347\274\223\345\255\230", 0));
        groupBox_7->setTitle(QApplication::translate("Form", "\345\205\266\345\256\203", 0));
        pushButton->setText(QApplication::translate("Form", "\345\272\224\347\224\250", 0));
        pushButton_2->setText(QApplication::translate("Form", "\347\241\256\345\256\232", 0));
        pushButton_3->setText(QApplication::translate("Form", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PPS_SETTING_DIALOG_H
