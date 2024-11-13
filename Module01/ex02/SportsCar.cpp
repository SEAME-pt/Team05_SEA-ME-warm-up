#include "SportsCar.hpp"

SportsCar::SportsCar() : Car()
{
    std::cout << "[ SportsCar default constructor called ]" << std::endl;
}

SportsCar::SportsCar(const SportsCar &other)
{
    std::cout << "[ SportsCar copy constructor called ]" << std::endl;
    if (this != &other)
    {
        this->top_speed = other.top_speed;
    }
}

SportsCar::~SportsCar()
{
    std::cout << "[ SportsCar destructor called ]" << std::endl;
}

SportsCar &SportsCar::operator=(const SportsCar &other)
{
    std::cout << "[ SportsCar copy assignment operator called ]" << std::endl;
    if (this != &other)
    {
        this->top_speed = other.top_speed;
    }
    return *this;
}

void SportsCar::drive() const
{
    // Car::drive();
    std::cout << "Sports Car " << model << " top speed: " << top_speed << "km/h." << std::endl;
}

// modularity
namespace CarActions
{
	void performActions(const SportsCar *c)
		{
			std::cout << "Car " << c->make << " " << c->model << " " << c->year << " edition." << std::endl;
			c->drive();
		}
} // namespace CarActions

int SportsCar::get_topspeed() const
{
    return top_speed;
}

void SportsCar::set_topspeed(int n)
{
    top_speed = n;
}