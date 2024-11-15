#include "mainwindow.h"
#include "contactlist.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ContactList contactList;
    MainWindow w(&contactList);
    w.show();
    return a.exec();
}
