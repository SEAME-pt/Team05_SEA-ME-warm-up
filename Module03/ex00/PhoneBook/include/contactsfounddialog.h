#ifndef CONTACTSFOUNDDIALOG_H
#define CONTACTSFOUNDDIALOG_H

#include <QDialog>
#include "contactlist.h"

namespace Ui {
class ContactsFoundDialog;
}

class ContactsFoundDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ContactsFoundDialog(std::string& name, ContactList* contactList, QWidget *parent = nullptr);
    void    loadContacts(std::string& name);
    ~ContactsFoundDialog();

private slots:
    void on_btn_close_clicked();

private:
    Ui::ContactsFoundDialog *ui;
    ContactList* contactList_;
};

#endif // CONTACTSFOUNDDIALOG_H
