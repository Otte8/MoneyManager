#include "Headers/welcomewindow.h"

#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    WelcomeWindow w;
    w.show();
    return QApplication::exec();
}
