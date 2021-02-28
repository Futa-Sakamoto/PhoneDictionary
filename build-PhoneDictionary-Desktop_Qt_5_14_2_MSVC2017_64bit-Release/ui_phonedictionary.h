/********************************************************************************
** Form generated from reading UI file 'phonedictionary.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHONEDICTIONARY_H
#define UI_PHONEDICTIONARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhoneDictionary
{
public:
    QAction *actionStatic;
    QAction *actionHeap;
    QAction *actionFile;
    QAction *actionDB;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label_name;
    QLabel *label_mail;
    QLabel *label_memo;
    QPushButton *pushButton_update;
    QTableWidget *tableWidget;
    QPushButton *pushButton_delete;
    QTextEdit *textEdit_name;
    QTextEdit *textEdit_mail;
    QTextEdit *textEdit_memo;
    QPushButton *pushButton_view;
    QMenuBar *menubar;
    QMenu *menuMode;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PhoneDictionary)
    {
        if (PhoneDictionary->objectName().isEmpty())
            PhoneDictionary->setObjectName(QString::fromUtf8("PhoneDictionary"));
        PhoneDictionary->resize(637, 426);
        actionStatic = new QAction(PhoneDictionary);
        actionStatic->setObjectName(QString::fromUtf8("actionStatic"));
        actionHeap = new QAction(PhoneDictionary);
        actionHeap->setObjectName(QString::fromUtf8("actionHeap"));
        actionFile = new QAction(PhoneDictionary);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionDB = new QAction(PhoneDictionary);
        actionDB->setObjectName(QString::fromUtf8("actionDB"));
        actionExit = new QAction(PhoneDictionary);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(PhoneDictionary);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_name = new QLabel(centralwidget);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(125, 21, 27, 16));
        label_mail = new QLabel(centralwidget);
        label_mail->setObjectName(QString::fromUtf8("label_mail"));
        label_mail->setGeometry(QRect(124, 63, 21, 16));
        label_memo = new QLabel(centralwidget);
        label_memo->setObjectName(QString::fromUtf8("label_memo"));
        label_memo->setGeometry(QRect(124, 110, 30, 16));
        pushButton_update = new QPushButton(centralwidget);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(434, 120, 75, 23));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 190, 471, 192));
        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(510, 300, 75, 23));
        textEdit_name = new QTextEdit(centralwidget);
        textEdit_name->setObjectName(QString::fromUtf8("textEdit_name"));
        textEdit_name->setGeometry(QRect(161, 21, 256, 31));
        textEdit_mail = new QTextEdit(centralwidget);
        textEdit_mail->setObjectName(QString::fromUtf8("textEdit_mail"));
        textEdit_mail->setGeometry(QRect(160, 63, 256, 31));
        textEdit_memo = new QTextEdit(centralwidget);
        textEdit_memo->setObjectName(QString::fromUtf8("textEdit_memo"));
        textEdit_memo->setGeometry(QRect(160, 110, 256, 31));
        pushButton_view = new QPushButton(centralwidget);
        pushButton_view->setObjectName(QString::fromUtf8("pushButton_view"));
        pushButton_view->setGeometry(QRect(510, 260, 75, 23));
        PhoneDictionary->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhoneDictionary);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 637, 21));
        menuMode = new QMenu(menubar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        PhoneDictionary->setMenuBar(menubar);
        statusbar = new QStatusBar(PhoneDictionary);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PhoneDictionary->setStatusBar(statusbar);

        menubar->addAction(menuMode->menuAction());
        menuMode->addSeparator();
        menuMode->addAction(actionStatic);
        menuMode->addAction(actionHeap);
        menuMode->addAction(actionFile);
        menuMode->addAction(actionDB);
        menuMode->addAction(actionExit);

        retranslateUi(PhoneDictionary);

        QMetaObject::connectSlotsByName(PhoneDictionary);
    } // setupUi

    void retranslateUi(QMainWindow *PhoneDictionary)
    {
        PhoneDictionary->setWindowTitle(QCoreApplication::translate("PhoneDictionary", "PhoneDictionary", nullptr));
        actionStatic->setText(QCoreApplication::translate("PhoneDictionary", "Static", nullptr));
        actionHeap->setText(QCoreApplication::translate("PhoneDictionary", "Heap", nullptr));
        actionFile->setText(QCoreApplication::translate("PhoneDictionary", "File", nullptr));
        actionDB->setText(QCoreApplication::translate("PhoneDictionary", "DB", nullptr));
        actionExit->setText(QCoreApplication::translate("PhoneDictionary", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("PhoneDictionary", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label_name->setText(QCoreApplication::translate("PhoneDictionary", "name", nullptr));
        label_mail->setText(QCoreApplication::translate("PhoneDictionary", "mail", nullptr));
        label_memo->setText(QCoreApplication::translate("PhoneDictionary", "memo", nullptr));
        pushButton_update->setText(QCoreApplication::translate("PhoneDictionary", "Update", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PhoneDictionary", "name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PhoneDictionary", "mail", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PhoneDictionary", "memo", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("PhoneDictionary", "Delete", nullptr));
        pushButton_view->setText(QCoreApplication::translate("PhoneDictionary", "View", nullptr));
        menuMode->setTitle(QCoreApplication::translate("PhoneDictionary", "Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhoneDictionary: public Ui_PhoneDictionary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHONEDICTIONARY_H
