#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addcontactdialog.h"
#include "contactlist.h"
#include "searchcontactsdialog.h"

#include <QFileDialog>
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


void MainWindow::on_btn_save_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save Contact List", "", "Text Files (*.txt)");

    if (!fileName.isEmpty())
    {
        if (contactList_->saveToFile(fileName))
            QMessageBox::information(this, "Success", "Contacts saved successfully!");
        else
            QMessageBox::warning(this, "Error", "Failed to save contacts.");
    }

}


void MainWindow::on_btn_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(nullptr, "Select Contact List File", "","Text Files (*.txt);;All Files (*)");

    if (!fileName.isEmpty())
    {
        if (contactList_->loadFromFile(fileName))
            QMessageBox::information(this, "Success", "Contacts loaded successfully!");
        else
            QMessageBox::warning(this, "Error", "Failed to load contacts.");
    }
}

