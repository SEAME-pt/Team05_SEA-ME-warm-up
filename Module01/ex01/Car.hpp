#ifndef CAR_HPP
# define CAR_HPP

# include <iostream>

class Car {
	public:
		Car();
        int year;
        std::string model;
        std::string make;
		Car(const Car &other);
		virtual ~Car();
        virtual void drive();
		Car&	operator=(const Car &other);
	private:

};


# endif