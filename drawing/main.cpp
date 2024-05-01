#include "mainwindow.h"
#include "DrawWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DrawWidget w;
    w.show();
    return a.exec();
}
