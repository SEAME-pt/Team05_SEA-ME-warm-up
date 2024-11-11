#include "Part.hpp"

Part::Part() {
	std::cout << "[ Part default constructor called ]" << std::endl;
}

Part::Part(const Part &other) {
	std::cout << "[ Part copy constructor called ]" << std::endl;
	if (this != &other) {
		;
	}
}

Part::~Part() {
	std::cout << "[ Part destructor called ]" << std::endl;
}

Part &Part::operator=(const Part &other) {
	std::cout << "[ Part copy assignment operator called ]" << std::endl;
	if (this != &other) {
		;
	}
	return *this;
}