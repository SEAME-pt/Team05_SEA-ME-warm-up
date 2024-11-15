#pragma once

#include <iostream>

// abstract class
class Car
{
  public:
    Car();
    int year;
    std::string model;
    std::string make;
    Car(const Car &other);
    virtual ~Car();
    virtual void drive() const = 0; // abstraction
    Car &operator=(const Car &other);
};
