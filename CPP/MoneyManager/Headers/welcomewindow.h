//
// Created by otte on 07/01/2021.
//

#ifndef MONEYMANAGER_WELCOMEWINDOW_H
#define MONEYMANAGER_WELCOMEWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class WelcomeWindow;
}
QT_END_NAMESPACE

class WelcomeWindow : public QWidget
{
Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);

    ~WelcomeWindow() override;

private:
    Ui::WelcomeWindow *ui;
};

#endif //MONEYMANAGER_WELCOMEWINDOW_H
