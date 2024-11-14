#include "addcontactdialog.h"
#include "ui_addcontactdialog.h"
#include <QMessageBox>
#include <QDebug>

AddContactDialog::AddContactDialog(ContactList* contactList, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddContactDialog)
    , contactList_(contactList)
{
    ui->setupUi(this);
}

AddContactDialog::~AddContactDialog()
{
    delete ui;
}

void AddContactDialog::on_btn_save_contact_clicked()
{
    std::string name = ui->lineEdit->text().toStdString();
    std::string nickName = ui->lineEdit_2->text().toStdString();
    std::string phoneNumber = ui->lineEdit_3->text().toStdString();
    std::string email = ui->lineEdit_4->text().toStdString();

    Contact contact;

    contact.setName(name);
    contact.setNickName(nickName);
    contact.setPhoneNumber(phoneNumber);
    contact.setEmail(email);

    this->contactList_->addContact(contact);
    QMessageBox::information(this, "Contact Saved", "Contact Saved Whith Success!");

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit->setFocus();


}

