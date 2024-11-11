#pragma once

#include <QThread>
#include "Car.hpp"
#include "RaceTrack.hpp"

class CarThread : public QThread
{
private:
    Car *car;                  // Pointer to the Car object
    RaceTrack *raceTrack;      // Pointer to the RaceTrack object

public:
    // Default Constructor
    CarThread(Car *car, RaceTrack *raceTrack);

    // Destructor
    ~CarThread();

    // Copy Constructor
    CarThread(const CarThread &other);

    // Copy Assignment Operator
    CarThread &operator=(const CarThread &other);

    // Move Assignment Operator
    CarThread &operator=(CarThread &&other) noexcept;

    // The main function that runs in a separate thread
    void run() override;
};

