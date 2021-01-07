/********************************************************************************
** Form generated from reading UI file 'applicationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONWINDOW_H
#define UI_APPLICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *pageWelcome;
    QLabel *labelWelcome;
    QPushButton *buttonNext;
    QWidget *pageAccounts;
    QLabel *labelAccounts;
    QPushButton *buttonAccountTest;
    QWidget *pageAccountDetails;
    QPushButton *buttonViewTransaction;
    QLabel *labelAccountDetails;
    QWidget *pageTransactions;
    QLabel *labelTransactions;
    QTableWidget *tableTransactions;

    void setupUi(QWidget *ApplicationWindow)
    {
        if (ApplicationWindow->objectName().isEmpty())
            ApplicationWindow->setObjectName(QString::fromUtf8("ApplicationWindow"));
        ApplicationWindow->resize(1200, 720);
        stackedWidget = new QStackedWidget(ApplicationWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 720));
        pageWelcome = new QWidget();
        pageWelcome->setObjectName(QString::fromUtf8("pageWelcome"));
        labelWelcome = new QLabel(pageWelcome);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setGeometry(QRect(350, 180, 531, 51));
        QFont font;
        font.setPointSize(30);
        labelWelcome->setFont(font);
        labelWelcome->setLayoutDirection(Qt::LeftToRight);
        buttonNext = new QPushButton(pageWelcome);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));
        buttonNext->setGeometry(QRect(560, 520, 88, 34));
        stackedWidget->addWidget(pageWelcome);
        pageAccounts = new QWidget();
        pageAccounts->setObjectName(QString::fromUtf8("pageAccounts"));
        labelAccounts = new QLabel(pageAccounts);
        labelAccounts->setObjectName(QString::fromUtf8("labelAccounts"));
        labelAccounts->setGeometry(QRect(560, 60, 58, 18));
        buttonAccountTest = new QPushButton(pageAccounts);
        buttonAccountTest->setObjectName(QString::fromUtf8("buttonAccountTest"));
        buttonAccountTest->setGeometry(QRect(460, 220, 88, 34));
        stackedWidget->addWidget(pageAccounts);
        pageAccountDetails = new QWidget();
        pageAccountDetails->setObjectName(QString::fromUtf8("pageAccountDetails"));
        buttonViewTransaction = new QPushButton(pageAccountDetails);
        buttonViewTransaction->setObjectName(QString::fromUtf8("buttonViewTransaction"));
        buttonViewTransaction->setGeometry(QRect(530, 430, 121, 34));
        labelAccountDetails = new QLabel(pageAccountDetails);
        labelAccountDetails->setObjectName(QString::fromUtf8("labelAccountDetails"));
        labelAccountDetails->setGeometry(QRect(570, 200, 131, 18));
        stackedWidget->addWidget(pageAccountDetails);
        pageTransactions = new QWidget();
        pageTransactions->setObjectName(QString::fromUtf8("pageTransactions"));
        labelTransactions = new QLabel(pageTransactions);
        labelTransactions->setObjectName(QString::fromUtf8("labelTransactions"));
        labelTransactions->setGeometry(QRect(530, 20, 131, 18));
        labelTransactions->setAutoFillBackground(false);
        tableTransactions = new QTableWidget(pageTransactions);
        if (tableTransactions->columnCount() < 4)
            tableTransactions->setColumnCount(4);
        tableTransactions->setObjectName(QString::fromUtf8("tableTransactions"));
        tableTransactions->setGeometry(QRect(25, 80, 1150, 615));
        tableTransactions->setShowGrid(true);
        tableTransactions->setSortingEnabled(false);
        tableTransactions->setWordWrap(true);
        tableTransactions->setColumnCount(4);
        tableTransactions->horizontalHeader()->setVisible(true);
        tableTransactions->horizontalHeader()->setCascadingSectionResizes(false);
        stackedWidget->addWidget(pageTransactions);

        retranslateUi(ApplicationWindow);

        QMetaObject::connectSlotsByName(ApplicationWindow);
    } // setupUi

    void retranslateUi(QWidget *ApplicationWindow)
    {
        ApplicationWindow->setWindowTitle(QCoreApplication::translate("ApplicationWindow", "ApplicationWindow", nullptr));
        labelWelcome->setText(QCoreApplication::translate("ApplicationWindow", "Welcome to MoneyManager", nullptr));
        buttonNext->setText(QCoreApplication::translate("ApplicationWindow", "Next", nullptr));
        labelAccounts->setText(QCoreApplication::translate("ApplicationWindow", "Accounts", nullptr));
        buttonAccountTest->setText(QCoreApplication::translate("ApplicationWindow", "account 1", nullptr));
        buttonViewTransaction->setText(QCoreApplication::translate("ApplicationWindow", "View transaction", nullptr));
        labelAccountDetails->setText(QCoreApplication::translate("ApplicationWindow", "This is a test account", nullptr));
        labelTransactions->setText(QCoreApplication::translate("ApplicationWindow", "This is a transaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApplicationWindow: public Ui_ApplicationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATIONWINDOW_H
