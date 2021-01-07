/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *labelWelcome;
    QPushButton *buttonNext;
    QWidget *page_2;

    void setupUi(QWidget *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName(QString::fromUtf8("WelcomeWindow"));
        WelcomeWindow->resize(1200, 720);
        stackedWidget = new QStackedWidget(WelcomeWindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 720));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        labelWelcome = new QLabel(page);
        labelWelcome->setObjectName(QString::fromUtf8("labelWelcome"));
        labelWelcome->setGeometry(QRect(350, 180, 531, 51));
        QFont font;
        font.setPointSize(30);
        labelWelcome->setFont(font);
        labelWelcome->setLayoutDirection(Qt::LeftToRight);
        buttonNext = new QPushButton(page);
        buttonNext->setObjectName(QString::fromUtf8("buttonNext"));
        buttonNext->setGeometry(QRect(560, 520, 88, 34));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(WelcomeWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "WelcomeWindow", nullptr));
        labelWelcome->setText(QCoreApplication::translate("WelcomeWindow", "Welcome to MoneyManager", nullptr));
        buttonNext->setText(QCoreApplication::translate("WelcomeWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
