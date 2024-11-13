#pragma once

#include "Car.hpp"
#include <iostream>

// inherited class
class SportsCar : public Car
{
  public:
    SportsCar();
    int top_speed;
    SportsCar(const SportsCar &other);
    ~SportsCar() override;
    void drive() const override;
    SportsCar &operator=(const SportsCar &other);
};
