#include "editcontactdialog.h"
#include "ui_editcontactdialog.h"

EditContactDialog::EditContactDialog(ContactList* contactList, int id, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditContactDialog)
    , id_(id)
    , contactList_(contactList)
{
    ui->setupUi(this);

    loadInfoContact();
}

void EditContactDialog::loadInfoContact()
{
    ui->lineEdit->setText(QString::fromStdString(contactList_->getContact(id_).getName()));
    ui->lineEdit_2->setText(QString::fromStdString(contactList_->getContact(id_).getNickName()));
    ui->lineEdit_3->setText(QString::fromStdString(contactList_->getContact(id_).getPhoneNumber()));
    ui->lineEdit_4->setText(QString::fromStdString(contactList_->getContact(id_).getEmail()));
}

EditContactDialog::~EditContactDialog()
{
    delete ui;
}

void EditContactDialog::on_btn_save_changes_clicked()
{
    std::string name = ui->lineEdit->text().toStdString();
    std::string nickName = ui->lineEdit_2->text().toStdString();
    std::string phoneNumber = ui->lineEdit_3->text().toStdString();
    std::string email = ui->lineEdit_4->text().toStdString();

    if (!name.empty() && !nickName.empty() && !phoneNumber.empty() && !email.empty())
    {
        contactList_->getContact(id_).setName(name);
        contactList_->getContact(id_).setNickName(nickName);
        contactList_->getContact(id_).setPhoneNumber(phoneNumber);
        contactList_->getContact(id_).setEmail(email);

        QMessageBox::information(this, "Saved Changes", "Saved changes with success!");
    }
    else
        QMessageBox::warning(this, "Empty Fields", "All fields must be filled in!");
}


void EditContactDialog::on_btn_cancel_clicked()
{
    close();
}

