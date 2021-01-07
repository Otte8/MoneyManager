//
// Created by otte on 07/01/2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_welcomeWindow.h" resolved

#include "../Headers/welcomewindow.h"
#include "../Forms/ui_welcomewindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent): QWidget(parent), ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
