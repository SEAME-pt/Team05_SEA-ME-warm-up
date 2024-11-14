#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "contactlist.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(ContactList* contactList, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    ContactList* contactList_;
};
#endif // MAINWINDOW_H
