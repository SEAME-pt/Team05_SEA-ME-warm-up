#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Car.hpp"  // Incluindo a classe Car

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Criar um objeto Car
    Car blueCar(0, 0, 1);

    // Atualizar o QLabel inicialmente com a posição do carro
    updatePositionLabel(blueCar);

    // Conectar o botão para mover o carro
    connect(ui->moveButton, &QPushButton::clicked, this, [this, &blueCar]() {
        blueCar.move();
        updatePositionLabel(blueCar);  // Atualiza a posição no QLabel
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updatePositionLabel(const Car &car)
{
    QString positionText = "Position: " + QString::number(car.getPosition());
    ui->labelPosition->setText(positionText);
}
