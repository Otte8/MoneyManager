//
// Created by otte on 07/01/2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ApplicationWindow.h" resolved

#include <iostream>
#include <QTableWidget>
#include <QPushButton>
#include "applicationwindow.h"
#include "ui_applicationwindow.h"
#include "../src/Account/Account.h"
#include "../src/Account/Transaction.h"

ApplicationWindow::ApplicationWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::ApplicationWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    auto buttonNext = ApplicationWindow::findChild<QPushButton *>("buttonNext");
    connect(buttonNext, SIGNAL(released()), this, SLOT(NextButtonPressed()));
    auto buttonAccount = ApplicationWindow::findChild<QPushButton *>("buttonAccountTest");
    connect(buttonAccount, SIGNAL(released()), this, SLOT(AccountButtonPressed()));
    auto buttonViewTransaction = ApplicationWindow::findChild<QPushButton *>("buttonViewTransaction");
    connect(buttonViewTransaction, SIGNAL(released()), this, SLOT(TransactionButtonPressed()));
    auto tableTransactions = ApplicationWindow::findChild<QTableWidget *>("tableTransactions");
    tableTransactions->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableTransactions->setColumnWidth(0, 140);
    tableTransactions->setColumnWidth(1, 695);
    tableTransactions->setColumnWidth(2, 140);
    tableTransactions->setColumnWidth(3, 140);
    std::initializer_list<QString> stringList = {"Date", "Description", "Amount", "Balance"};
    QStringList qStringList(stringList);
    tableTransactions->setHorizontalHeaderLabels(qStringList);

    auto account = new Account(5, "ja", "jjo");
    tableTransactions->setRowCount(10);
    for (int i = 0; i < tableTransactions->rowCount(); i++)
    {
        auto transaction = new Transaction(i+1, 1, "04-01-2021", "Yes", income);

        auto date = new QTableWidgetItem(QString(transaction->getDate().c_str()));
        auto description = new QTableWidgetItem(QString(transaction->getDescription().c_str()));
        auto amount = new QTableWidgetItem(QString::number(transaction->getAmount()));
        auto balance = new QTableWidgetItem(QString::number(transaction->getBalance()));


        tableTransactions->setItem(i, 0, date);
        tableTransactions->setItem(i, 1, description);
        tableTransactions->setItem(i, 2, amount);
        tableTransactions->setItem(i, 3, balance);

        std::cout << account->getTransactions().size() << std::endl;

        account->addTransaction(transaction);
    }
}

ApplicationWindow::~ApplicationWindow()
{
    delete ui;
}

void ApplicationWindow::NextButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void ApplicationWindow::AccountButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void ApplicationWindow::TransactionButtonPressed()
{
    ui->stackedWidget->setCurrentIndex(3);
}