#ifndef ADDCONTACTDIALOG_H
#define ADDCONTACTDIALOG_H

#include <QDialog>
#include "contactlist.h"

namespace Ui {
class AddContactDialog;
}

class AddContactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddContactDialog(ContactList* contactList, QWidget *parent = nullptr);
    ~AddContactDialog();

private slots:
    void on_btn_save_contact_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::AddContactDialog *ui;
    ContactList* contactList_;
};

#endif // ADDCONTACTDIALOG_H
