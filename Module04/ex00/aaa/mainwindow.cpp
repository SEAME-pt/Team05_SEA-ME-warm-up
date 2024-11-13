#include <QCoreApplication>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QDir>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString appDir = QCoreApplication::applicationDirPath(); //Path for executable

    QString logoPath = QDir(appDir).filePath("images/ondas2-removebg-preview.png");

    QPixmap logo(logoPath);
    ui->image->setPixmap(logo.scaled(620, 351, Qt::KeepAspectRatio));

    QString pato1Path = QDir(appDir).filePath("images/pato1.png");
    QPixmap pato1(pato1Path);
    ui->pato1->setPixmap(pato1.scaled(100, 100, Qt::KeepAspectRatio));

    QString pato2Path = QDir(appDir).filePath("images/pato2.png");
    QPixmap pato2(pato2Path);
    ui->pato2->setPixmap(pato2.scaled(100, 100, Qt::KeepAspectRatio));


    QString pato3Path = QDir(appDir).filePath("images/pato3.png");
    QPixmap pato3(pato3Path);
    ui->pato3->setPixmap(pato3.scaled(100, 100, Qt::KeepAspectRatio));
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exitBt_clicked()
{
    close();
}


void MainWindow::on_startBt_clicked()
{
    ui->label->setText("Race started!!");
}

