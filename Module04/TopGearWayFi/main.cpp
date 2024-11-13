#include "mainwindow.h"

#include <QApplication>
#include "Car.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Car blueCar(0, 10, 1);
    blueCar.move();
    blueCar.setPosition(100);
    blueCar.move();
    MainWindow w;
    w.show();
    return a.exec();
}
