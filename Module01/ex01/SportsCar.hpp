#ifndef SPORTSCAR_HPP
# define SPORTSCAR_HPP

# include <iostream>
# include "Car.hpp"

class SportsCar : public Car {
	public:
		SportsCar();
        int top_speed;
		SportsCar(const SportsCar &other);
		~SportsCar() override;
        void drive() override;
		SportsCar&	operator=(const SportsCar &other);
	private:

};

# endif