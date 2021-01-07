/********************************************************************************
** Form generated from reading UI file 'accountwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTWINDOW_H
#define UI_ACCOUNTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountWindow
{
public:

    void setupUi(QWidget *AccountWindow)
    {
        if (AccountWindow->objectName().isEmpty())
            AccountWindow->setObjectName(QString::fromUtf8("AccountWindow"));
        AccountWindow->resize(1200, 720);

        retranslateUi(AccountWindow);

        QMetaObject::connectSlotsByName(AccountWindow);
    } // setupUi

    void retranslateUi(QWidget *AccountWindow)
    {
        AccountWindow->setWindowTitle(QCoreApplication::translate("AccountWindow", "MoneyManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountWindow: public Ui_AccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTWINDOW_H
