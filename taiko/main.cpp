#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("taiko");
    w.setWindowIcon(QIcon(":/pics/head2.png"));
    w.setFixedSize(1024,768);
    w.show();

    return a.exec();
}
