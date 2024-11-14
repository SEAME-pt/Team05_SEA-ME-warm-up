#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QDateTime>

static int count = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap road("/home/jetracer/Documents/M04_Multithreading/static/road-pixel.jpg");
    ui->labelRoad->setPixmap(road.scaled(719,469,Qt::KeepAspectRatio));

    // Para a contagem de segundos no terminal
    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(timerCounter()));
    time->start(1000);

    // Para o relogio
    clockTime = new QTimer();
    connect(clockTime, SIGNAL(timeout()), this, SLOT(clockUpdater()));
    clockTime->start(1000);

    // Configuração da RaceTrack e Car
    raceTrack = new RaceTrack(1000, 1000);  // Pista de tamanho 1000 e linha de chegada em 1000
    car = new Car(0, 10, 1);
    connect(ui->pushButtonStart, &QPushButton::clicked, this, &MainWindow::startRace);
}

MainWindow::~MainWindow()
{
    delete carThread;
    delete car;
    delete raceTrack;
    delete ui;
}

void MainWindow::on_pushButtonExit_clicked()
{
    QMessageBox::StandardButton response = QMessageBox::question(this, "Exit game", "Would you like to leave the game?", QMessageBox::Yes | QMessageBox::No);
    if (response == QMessageBox::Yes) {
        //close();
        QApplication::quit();
        qDebug() << "The game exited after exit botton(yes) was clicked!";
    } else {
        //QMessageBox::about(this, "", "Follow the game!)");
        qDebug() << "The game do not exited!";
    }

}

void MainWindow::on_pushButtonStart_clicked()
{
    //QString css_start_button="background-color: #26A269; color: #fff;";
    //ui->pushButtonStart->setStyleSheet(css_start_button);
}

void MainWindow::timerCounter() {
    count++;
    qDebug() << "The clock start: " << count;
}

void MainWindow::clockUpdater() {
    QTime current_time  = QTime::currentTime();
    QString textTme     = current_time.toString("hh:mm:ss");
    ui->labelClock->setText(textTme);
}

void MainWindow::startRace()
{
    carThread = new CarThread(car, raceTrack);

    connect(carThread, &CarThread::positionChanged, this, &MainWindow::updatePosition);

    carThread->start();
}

void MainWindow::updatePosition(int newPosition)
{
    ui->progressBarCar_1->setValue(newPosition);
    ui->labelCar_1_Position->setText(QString::number(newPosition));
}

void MainWindow::onRaceFinished()
{
    QMessageBox::information(this, "Race finished", "The car was winner!");
    ui->progressBarCar_1->setValue(raceTrack->getFinishLine());
}
