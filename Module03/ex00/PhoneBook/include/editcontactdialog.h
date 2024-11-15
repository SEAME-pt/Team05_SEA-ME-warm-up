#ifndef EDITCONTACTDIALOG_H
#define EDITCONTACTDIALOG_H

#include <QDialog>
#include "contactlist.h"

namespace Ui {
class EditContactDialog;
}

class EditContactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditContactDialog(ContactList* contactList, int id, QWidget *parent = nullptr);

    void loadInfoContact();

    ~EditContactDialog();

private slots:
    void on_btn_save_changes_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::EditContactDialog *ui;
    ContactList* contactList_;
    int id_;
};

#endif // EDITCONTACTDIALOG_H
