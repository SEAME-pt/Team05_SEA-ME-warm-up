#include "Wheel.hpp"

Wheel::Wheel(): Part() {
	std::cout << "[ Wheel default constructor called ]" << std::endl;
}

Wheel::Wheel(const Wheel &other) {
	std::cout << "[ Wheel copy constructor called ]" << std::endl;
	if (this != &other) {
		type = other.type;
	}
}

Wheel::~Wheel() {
	std::cout << "[ Wheel destructor called ]" << std::endl;
}

Wheel &Wheel::operator=(const Wheel &other) {
	std::cout << "[ Wheel copy assignment operator called ]" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}