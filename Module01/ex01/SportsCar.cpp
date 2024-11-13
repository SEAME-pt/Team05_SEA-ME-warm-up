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
    Car::drive();
    std::cout << "Sports Car top speed: " << top_speed << "km/h." << std::endl;
}