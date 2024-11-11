#include "Car.hpp"

Car::Car() {
	std::cout << "[ Car default constructor called ]" << std::endl;
	model = "";
	year = 0;
	make = "";

}

Car::Car(const Car &other) {
	std::cout << "[ Car copy constructor called ]" << std::endl;
	if (this != &other) {
		this->model = other.model;
		this->make = other.make;
		this->year = other.year;
	}
}

Car::~Car() {
	std::cout << "[ Car destructor called ]" << std::endl;
}

Car &Car::operator=(const Car &other) {
	std::cout << "[ Car copy assignment operator called ]" << std::endl;
	if (this != &other) {
		this->model = other.model;
		this->make = other.make;
		this->year = other.year;
	}
	return *this;
}

// void Car::drive() {
// 	std::cout << "Driving " << make << " " << model << " " << year << " edition." << std::endl;
// }