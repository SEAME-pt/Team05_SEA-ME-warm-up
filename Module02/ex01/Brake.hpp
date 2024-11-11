#pragma once

# include <iostream>
#include "Part.hpp"

class Brake: public Part {
	public:
		Brake();
		Brake(const Brake &other);
		~Brake();
		Brake&	operator=(const Brake &other);
        void print() override {
        std::cout << "Brake: " << type << ".\n";
    }
	void set_type(std::string type_) {
		type = type_;
	}
	private:
		std::string type;

};
