#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "CarThread.h"
#include "Car.h"
#include "RaceTrack.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void startRace();
    void updatePosition(int newPosition);
    void onRaceFinished();

    void on_pushButtonExit_clicked();

    void on_pushButtonStart_clicked();

    void timerCounter();

    void clockUpdater();

private:
    Ui::MainWindow *ui;

    Car *car;
    RaceTrack *raceTrack;
    CarThread *carThread;

    //RaceTrack *raceTrack;
    //std::vector<Car*> cars;
    //std::vector<CarThread*> carThreads;
    //std::vector<QProgressBar*> progressBars;
    //std::vector<QLabel*> positionLabels;

    QTimer *time;
    QTimer *clockTime;
};
#endif // MAINWINDOW_H
