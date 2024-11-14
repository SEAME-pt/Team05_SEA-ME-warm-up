#ifndef SEARCHCONTACTSDIALOG_H
#define SEARCHCONTACTSDIALOG_H

#include <QDialog>
#include "contactlist.h"

namespace Ui {
class SearchContactsDialog;
}

class SearchContactsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchContactsDialog(ContactList* contactList, QWidget *parent = nullptr);
    void    loadContacts();
    ~SearchContactsDialog();

private slots:
    void on_btn_delete_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SearchContactsDialog *ui;
    ContactList* contactList_;
};

#endif // SEARCHCONTACTSDIALOG_H
