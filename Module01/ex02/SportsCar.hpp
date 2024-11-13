#pragma once

#include "Car.hpp"
#include <iostream>

// inherited class
class SportsCar : public Car
{
  public:
    SportsCar();
    SportsCar(const SportsCar &other);
    ~SportsCar() override;
    void drive() const override; // polymorphism
    SportsCar &operator=(const SportsCar &other);

    // encapsulation
    int get_topspeed() const;
    void set_topspeed(int n);

  private: // encapsulation
    int top_speed;
};

// modular
namespace CarActions
{
	void performActions(const SportsCar *c);
}
