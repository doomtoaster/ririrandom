/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include <randomlistwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    randomListWidget *radnomListWidget;
    QPushButton *ranButton;
    QTextBrowser *textBrowser;
    QPushButton *addButton;
    QMenuBar *menubar;
    QMenu *menuRandomPicker;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(453, 660);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        radnomListWidget = new randomListWidget(centralwidget);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(radnomListWidget);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        new QListWidgetItem(radnomListWidget);
        new QListWidgetItem(radnomListWidget);
        new QListWidgetItem(radnomListWidget);
        radnomListWidget->setObjectName("radnomListWidget");
        radnomListWidget->setGeometry(QRect(20, 210, 411, 331));
        ranButton = new QPushButton(centralwidget);
        ranButton->setObjectName("ranButton");
        ranButton->setGeometry(QRect(20, 121, 411, 71));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 20, 411, 91));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(20, 550, 411, 61));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 453, 19));
        menuRandomPicker = new QMenu(menubar);
        menuRandomPicker->setObjectName("menuRandomPicker");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuRandomPicker->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));

        const bool __sortingEnabled = radnomListWidget->isSortingEnabled();
        radnomListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = radnomListWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = radnomListWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = radnomListWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = radnomListWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        radnomListWidget->setSortingEnabled(__sortingEnabled);

        ranButton->setText(QCoreApplication::translate("MainWindow", "Random", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "AddItem", nullptr));
        menuRandomPicker->setTitle(QCoreApplication::translate("MainWindow", "RandomPicker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
