#pragma once

# include <iostream>
#include "Part.hpp"

class Engine: public Part {
	public:
		Engine();
		Engine(const Engine &other);
		~Engine();
		Engine&	operator=(const Engine &other);
        void print() override {
        std::cout << "Engine: " << type << ".\n";
    }

	void	set_type(std::string type_) {
		type = type_;
	}
	
	private:
		std::string type;
};

