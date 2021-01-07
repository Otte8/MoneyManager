//
// Created by otte on 07/01/2021.
//

#ifndef MONEYMANAGER_APPLICATIONWINDOW_H
#define MONEYMANAGER_APPLICATIONWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class ApplicationWindow;
}
QT_END_NAMESPACE

class ApplicationWindow : public QWidget
{
Q_OBJECT

public:
    explicit ApplicationWindow(QWidget *parent = nullptr);

    ~ApplicationWindow() override;

private:
    Ui::ApplicationWindow *ui;

private slots:
    void NextButtonPressed();
    void AccountButtonPressed();
    void TransactionButtonPressed();
};

#endif //MONEYMANAGER_APPLICATIONWINDOW_H
