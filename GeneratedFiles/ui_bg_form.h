/********************************************************************************
** Form generated from reading UI file 'bg_form.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BG_FORM_H
#define UI_BG_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_4;
    QVBoxLayout *verticalLayout;
    QListView *listView;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(637, 469);
        QFont font;
        font.setFamily(QStringLiteral("Fixedsys"));
        Form->setFont(font);
        Form->setStyleSheet(QLatin1String("QWidget#Form{border-image: url(:/images/soft_windows_bg.png)  50 10 10 70;\n"
"border-width: 50 10 10 70\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Form);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        toolButton_2 = new QToolButton(Form);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(Form);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(40, 80));
        toolButton_3->setCursor(QCursor(Qt::ArrowCursor));
        toolButton_3->setStyleSheet(QLatin1String("background:transparent;\n"
"color:red;\n"
""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/star_beast.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon);
        toolButton_3->setIconSize(QSize(48, 48));
        toolButton_3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_3->setAutoRaise(false);
        toolButton_3->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_3, 0, Qt::AlignVCenter);

        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);
        label->setIndent(0);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toolButton_4 = new QToolButton(Form);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));

        horizontalLayout->addWidget(toolButton_4);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(Form);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 10);
        verticalLayout_2->setStretch(1, 90);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "\344\270\255\346\226\207", 0));
        toolButton_2->setText(QApplication::translate("Form", "dddddddddd", 0));
        toolButton_3->setText(QApplication::translate("Form", "text", 0));
        label->setText(QApplication::translate("Form", "1233333333d", 0));
        toolButton_4->setText(QApplication::translate("Form", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BG_FORM_H
