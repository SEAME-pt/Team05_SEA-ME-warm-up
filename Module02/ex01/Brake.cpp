#include "Brake.hpp"

Brake::Brake() : Part()
{
    std::cout << "[ Brake default constructor called ]" << std::endl;
}

Brake::Brake(const Brake &other)
{
    std::cout << "[ Brake copy constructor called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
}

Brake::~Brake()
{
    std::cout << "[ Brake destructor called ]" << std::endl;
}

Brake &Brake::operator=(const Brake &other)
{
    std::cout << "[ Brake copy assignment operator called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Brake::print() const
{
    std::cout << "Brake: " << type << ".\n";
}

void Brake::set_type(std::string type_)
{
    type = type_;
}