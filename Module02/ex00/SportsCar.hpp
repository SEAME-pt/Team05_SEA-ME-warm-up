#ifndef SPORTSCAR_HPP
# define SPORTSCAR_HPP

# include <iostream>
# include "Car.hpp"
#include <memory>

//inherited class
class SportsCar : public Car {
	public:
		SportsCar();
		SportsCar(const SportsCar &other);
		~SportsCar() override;
        void drive() override; //polymorphism
		SportsCar&	operator=(const SportsCar &other);

		//encapsulation
		int get_topspeed();
		void set_topspeed(int n);

	private: //encapsulation
        int top_speed;

};

//modular
namespace CarActions {
	void performActions(SportsCar *c);
}

# endif