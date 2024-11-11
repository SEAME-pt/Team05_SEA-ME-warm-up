#ifndef WHEEL_HPP
# define WHEEL_HPP

# include <iostream>
#include "Part.hpp"

class Wheel: public Part {
	public:
		Wheel();
		Wheel(const Wheel &other);
		~Wheel();
		Wheel&	operator=(const Wheel &other);
        void print() override {
        std::cout << "Wheel: " << type << ".\n";
    }
	void	set_type(std::string type_) {
		type = type_;
	}
	private:
		std::string type;
};

# endif