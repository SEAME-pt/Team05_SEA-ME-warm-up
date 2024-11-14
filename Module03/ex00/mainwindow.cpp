#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addcontactdialog.h"
#include "contactlist.h"
#include "searchcontactsdialog.h"
#include <QDebug>

MainWindow::MainWindow(ContactList* contactList, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , contactList_(contactList)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_add_clicked()
{
    AddContactDialog addContact(this->contactList_);
    addContact.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    SearchContactsDialog searchContact(this->contactList_);
    searchContact.exec();
}

