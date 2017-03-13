/********************************************************************************
** Form generated from reading UI file 'qt_button.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_BUTTON_H
#define UI_QT_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_buttonClass
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *qt_buttonClass)
    {
        if (qt_buttonClass->objectName().isEmpty())
            qt_buttonClass->setObjectName(QStringLiteral("qt_buttonClass"));
        qt_buttonClass->resize(594, 447);
        QFont font;
        qt_buttonClass->setFont(font);
        qt_buttonClass->setStyleSheet(QLatin1String("#1centralWidget{\n"
"border-image:url(:/images/pps/player_bg.png) 1 1;\n"
"border-width: 1 1;\n"
"}"));
        centralWidget = new QWidget(qt_buttonClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 60, 541, 331));
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(4);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setVisible(true);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        qt_buttonClass->setCentralWidget(centralWidget);

        retranslateUi(qt_buttonClass);

        QMetaObject::connectSlotsByName(qt_buttonClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt_buttonClass)
    {
        qt_buttonClass->setWindowTitle(QApplication::translate("qt_buttonClass", "\344\270\255\346\226\207", 0));
    } // retranslateUi

};

namespace Ui {
    class qt_buttonClass: public Ui_qt_buttonClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_BUTTON_H
