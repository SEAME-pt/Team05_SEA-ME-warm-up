#include "Car.hpp"

Car::Car() {
	std::cout << "[ Car default constructor called ]" << std::endl;
    name = "";
    speed = 0;
}

Car::Car(const Car &other) {
	std::cout << "[ Car copy constructor called ]" << std::endl;
	if (this != &other) {
		this->name = other.name;
        this->speed = other.speed;
	}
}

Car::~Car() {
	std::cout << "[ Car destructor called ]" << std::endl;
}

Car &Car::operator=(const Car &other) {
	std::cout << "[ Car copy assignment operator called ]" << std::endl;
	if (this != &other) {
		this->name = other.name;
        this->speed = other.speed;
	}
	return *this;
}

int main() {
    Car c;
    c.name = "oi";
    std::cout << c.name << std::endl;
    c.speed = 5;
    std::cout << c.speed << std::endl;
    Car c1(c);
    std::cout << c1.name << std::endl;
    std::cout << c1.speed << std::endl;
    Car c2;
    c2 = c;
    std::cout << c2.name << std::endl;
    std::cout << c2.speed << std::endl;

    Car *c3 = new Car();
    c3->name = "ola";
    std::cout << c3->name << std::endl;
    c3->speed = 10;
    std::cout << c3->speed << std::endl;
    Car *c4 = new Car(*c3);
    std::cout << c4->name << std::endl;
    std::cout << c4->speed << std::endl;

    delete c3;
    delete c4;
}