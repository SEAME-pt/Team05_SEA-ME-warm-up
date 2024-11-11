#include "CarThread.hpp"

// Default Constructor
CarThread::CarThread(Car *car, RaceTrack *raceTrack)
    : car(car), raceTrack(raceTrack) {}

// Destructor
CarThread::~CarThread() {}

// Copy Constructor
CarThread::CarThread(const CarThread &other)
    : car(other.car), raceTrack(other.raceTrack)
{}

// Copy Assignment Operator
CarThread &CarThread::operator=(const CarThread &other)
{
    if (this != &other) 
    {
        car = other.car;
        raceTrack = other.raceTrack;
    }
    return *this;
}


// Move Assignment Operator
CarThread &CarThread::operator=(CarThread &&other) noexcept
{
    if (this != &other) {
        // Transfer ownership of resources
        car = other.car;
        raceTrack = other.raceTrack;

        // Null out the original pointers to avoid dangling pointers
        other.car = nullptr;
        other.raceTrack = nullptr;
    }
    return *this;
}

// run() function, executed by the thread
void CarThread::run()
{
    // Loop while the car hasn't reached the finish line
    while (car->getPosition() < raceTrack->getFinishLine()) {
        car->move();  // Move the car (this function should be defined in the Car class)
        msleep(10);   // Sleep for 10 milliseconds (simulate the delay between movements)
    }
}
