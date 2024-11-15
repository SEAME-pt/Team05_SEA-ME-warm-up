#include "searchcontactsdialog.h"
#include "ui_searchcontactsdialog.h"

SearchContactsDialog::SearchContactsDialog(ContactList* contactList, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SearchContactsDialog)
    , contactList_(contactList)
{
    ui->setupUi(this);

    this->loadContacts();

}

void SearchContactsDialog::loadContacts()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);

    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setColumnWidth(0, 20);
    ui->tableWidget->setColumnWidth(1, 170);
    ui->tableWidget->setColumnWidth(2, 170);
    ui->tableWidget->setColumnWidth(3, 170);
    ui->tableWidget->setColumnWidth(4, 270);

    QStringList hedears = {"ID", "Name", "Nickname", "Phone Number", "Email"};

    for (int i = 0; i < contactList_->getSizeContactsList(); i++)
    {
        std::string name = contactList_->getContact(i).getName();
        std::string nickName = contactList_->getContact(i).getNickName();
        std::string phoneNumber = contactList_->getContact(i).getPhoneNumber();
        std::string email = contactList_->getContact(i).getEmail();

        ui->tableWidget->insertRow(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(name)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(nickName)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(phoneNumber)));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(email)));
    }

    ui->tableWidget->setHorizontalHeaderLabels(hedears);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:blue}");
}

SearchContactsDialog::~SearchContactsDialog()
{
    delete ui;
}

void SearchContactsDialog::on_btn_delete_clicked()
{
    QList<QTableWidgetItem *> selectedItems = ui->tableWidget->selectedItems();

    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a contact to delete.");
        return;
    }

    int row = ui->tableWidget->currentRow();
    if (row >= 0)
    {
        int id = ui->tableWidget->item(row, 0)->text().toInt();

        QMessageBox::StandardButton option;

        option = QMessageBox::question(this, "Confirm Deletion", "Do you really want to delete the contact?", QMessageBox::Yes | QMessageBox::No);

        if (option == QMessageBox::Yes)
        {
            contactList_->removeContact(id - 1);
            ui->tableWidget->removeRow(row);
            this->loadContacts();
            QMessageBox::information(this, "Contact Deleted", "Contact Was Deleted With Success!");

            ui->tableWidget->clearSelection();
            ui->tableWidget->update();
        }
    }
}


void SearchContactsDialog::on_btn_search_clicked()
{
    std::string name = ui->lineEdit->text().toStdString();

    if (!name.empty())
    {
        for (int i = 0; i < contactList_->getSizeContactsList(); i++)
        {
            if (contactList_->findContact(i, name))
            {
                ContactsFoundDialog contactsFound(name, this->contactList_);
                contactsFound.exec();
                break;
            }
        }
    }
}


void SearchContactsDialog::on_btn_edit_clicked()
{
    QList<QTableWidgetItem *> selectedItems = ui->tableWidget->selectedItems();

    if (selectedItems.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please select a contact to edit.");
        return;
    }

    int row = ui->tableWidget->currentRow();
    if (row >= 0)
    {
        int id = ui->tableWidget->item(row, 0)->text().toInt();

        EditContactDialog editContact(contactList_, id - 1);
        editContact.exec();
        loadContacts();
    }

}

