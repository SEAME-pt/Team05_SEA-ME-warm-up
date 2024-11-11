#pragma once

# include <iostream>
#include "Part.hpp"

class Transmission: public Part {
	public:
		Transmission();
		Transmission(const Transmission &other);
		~Transmission();
		Transmission&	operator=(const Transmission &other);
        void print() override {
        std::cout << "Transmission: " << type << ".\n";
    }

	void	set_type(std::string type_) {
		type = type_;
	}
	
	private:
		std::string type;

};
