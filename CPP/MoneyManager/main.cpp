#include <QApplication>
#include "Forms/applicationwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    ApplicationWindow w;
    w.show();
    return QApplication::exec();
}
