#pragma once

#include <iostream>
#include <memory>

#include "Brake.hpp"
#include "Engine.hpp"
#include "Transmission.hpp"
#include "Wheel.hpp"

class Car
{
  public:
    Car(const Car &other);
    Car();
    ~Car();
    Car &operator=(const Car &other);

    // getters
    Wheel *get_wheel(void) const;
    Transmission *get_transmission(void) const;
    Brake *get_brakes(void) const;
    Engine *get_engine(void) const;

    std::string get_model(void) const;
    void set_model(std::string model_); // setter

    void print() const;

  private:
    std::string model;
    std::unique_ptr<Engine> engine_;
    std::unique_ptr<Transmission> transmission_;
    std::unique_ptr<Wheel> wheels_;
    std::unique_ptr<Brake> brakes_;
};

namespace Details
{
void print_details(Car *c);
}