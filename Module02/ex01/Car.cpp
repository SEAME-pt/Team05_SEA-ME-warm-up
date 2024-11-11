#include "Car.hpp"


Car::Car(const Car &other) {
	std::cout << "[ Car copy constructor called ]" << std::endl;
	if (this != &other) {
		wheels_ = std::make_unique<Wheel>(*other.wheels_);
        brakes_ = std::make_unique<Brake>(*other.brakes_);
        engine_ = std::make_unique<Engine>(*other.engine_);
        transmission_ = std::make_unique<Transmission>(*other.transmission_);
	}
}

Car::~Car() {
	std::cout << "[ Car destructor called ]" << std::endl;
}

Car &Car::operator=(const Car &other) {
	std::cout << "[ Car copy assignment operator called ]" << std::endl;
	if (this != &other) {
		wheels_ = std::make_unique<Wheel>(*other.wheels_);
        brakes_ = std::make_unique<Brake>(*other.brakes_);
        engine_ = std::make_unique<Engine>(*other.engine_);
        transmission_ = std::make_unique<Transmission>(*other.transmission_);
	}
	return *this;
}