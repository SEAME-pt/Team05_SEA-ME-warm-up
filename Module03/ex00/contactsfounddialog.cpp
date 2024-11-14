#include "contactsfounddialog.h"
#include "ui_contactsfounddialog.h"

ContactsFoundDialog::ContactsFoundDialog(std::string& name, ContactList* contactList, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ContactsFoundDialog)
    , contactList_(contactList)
{
    ui->setupUi(this);

    loadContacts(name);
}

void    ContactsFoundDialog::loadContacts(std::string& name)
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

    int row = 0;

    for (int i = 0; i < contactList_->getSizeContactsList(); i++)
    {
        if (contactList_->findContact(i, name))
        {
            std::string name = contactList_->getContact(i).getName();
            std::string nickName = contactList_->getContact(i).getNickName();
            std::string phoneNumber = contactList_->getContact(i).getPhoneNumber();
            std::string email = contactList_->getContact(i).getEmail();

            ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(i + 1)));
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(name)));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(nickName)));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(phoneNumber)));
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(email)));
            row++;
        }
    }

    ui->tableWidget->setHorizontalHeaderLabels(hedears);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->setStyleSheet("QTableView {selection-background-color:blue}");

}

ContactsFoundDialog::~ContactsFoundDialog()
{
    delete ui;
}

void ContactsFoundDialog::on_btn_close_clicked()
{
    close();
}
