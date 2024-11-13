#include "Car.hpp"

// smart pointers
Car::Car()
{
    engine_ = std::make_unique<Engine>();
    transmission_ = std::make_unique<Transmission>();
    wheels_ = std::make_unique<Wheel>();
    brakes_ = std::make_unique<Brake>();
}

Car::Car(const Car &other)
{
    std::cout << "[ Car copy constructor called ]" << std::endl;
    if (this != &other)
    {
        wheels_ = std::make_unique<Wheel>(*other.wheels_);
        brakes_ = std::make_unique<Brake>(*other.brakes_);
        engine_ = std::make_unique<Engine>(*other.engine_);
        transmission_ = std::make_unique<Transmission>(*other.transmission_);
    }
}

Car::~Car()
{
    std::cout << "[ Car destructor called ]" << std::endl;
}

Car &Car::operator=(const Car &other)
{
    std::cout << "[ Car copy assignment operator called ]" << std::endl;
    if (this != &other)
    {
        wheels_ = std::make_unique<Wheel>(*other.wheels_);
        brakes_ = std::make_unique<Brake>(*other.brakes_);
        engine_ = std::make_unique<Engine>(*other.engine_);
        transmission_ = std::make_unique<Transmission>(*other.transmission_);
    }
    return *this;
}

// getters
Wheel *Car::get_wheel(void) const
{
    return wheels_.get();
}
Transmission *Car::get_transmission(void) const
{
    return transmission_.get();
}
Brake *Car::get_brakes(void) const
{
    return brakes_.get();
}
Engine *Car::get_engine(void) const
{
    return engine_.get();
}

std::string Car::get_model(void) const
{
    return model;
}

void Car::print() const
{
    // std::cout << "Car: " << model << ".\n";
    engine_->print();
    transmission_->print();
    wheels_->print();
    brakes_->print();
}

void Car::set_model(std::string model_)
{
    model = model_;
}

namespace Details
{
	void print_details(Car *c)
	{
		std::cout << "Car: " << c->get_model() << ".\n";
		c->print();
	}
} // namespace Details