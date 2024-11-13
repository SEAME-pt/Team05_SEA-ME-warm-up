#include "Transmission.hpp"

Transmission::Transmission() : Part()
{
    std::cout << "[ Transmission default constructor called ]" << std::endl;
}

Transmission::Transmission(const Transmission &other)
{
    std::cout << "[ Transmission copy constructor called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
}

Transmission::~Transmission()
{
    std::cout << "[ Transmission destructor called ]" << std::endl;
}

Transmission &Transmission::operator=(const Transmission &other)
{
    std::cout << "[ Transmission copy assignment operator called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Transmission::print() const
{
    std::cout << "Transmission: " << type << ".\n";
}

void Transmission::set_type(std::string type_)
{
    type = type_;
}