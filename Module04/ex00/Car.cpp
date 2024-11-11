#include "Car.hpp"
#include <iostream>


Car::Car() : position(0), speed(0), direction(1) {}


Car::Car(int pos, int spd, int dir) : position(pos), speed(spd), direction(dir) {}


Car::Car(const Car& other) : position(other.position), speed(other.speed), direction(other.direction) {}


Car& Car::operator=(const Car& other) {
    if (this != &other) {
        position = other.position;
        speed = other.speed;
        direction = other.direction;
    }
    return *this;
}


Car::~Car() {}


void Car::move() {
    position += speed * direction;
    positionChanged(position);
}


void Car::positionChanged(int newPosition) {
    std::cout << "Position changed to: " << newPosition << std::endl;
}


int Car::getPosition() const { return position; }
int Car::getSpeed() const { return speed; }
int Car::getDirection() const { return direction; }

// Setters
void Car::setPosition(int pos) { position = pos; }
void Car::setSpeed(int spd) { speed = spd; }
void Car::setDirection(int dir) { direction = dir; }
