#include "Engine.hpp"

Engine::Engine() : Part()
{
    std::cout << "[ Engine default constructor called ]" << std::endl;
}

Engine::Engine(const Engine &other)
{
    std::cout << "[ Engine copy constructor called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
}

Engine::~Engine()
{
    std::cout << "[ Engine destructor called ]" << std::endl;
}

Engine &Engine::operator=(const Engine &other)
{
    std::cout << "[ Engine copy assignment operator called ]" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

void Engine::print() const
{
    std::cout << "Engine: " << type << ".\n";
}

void Engine::set_type(std::string type_)
{
    type = type_;
}
