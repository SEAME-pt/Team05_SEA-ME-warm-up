#pragma once

#include <iostream>

class Car
{
  public:
    Car();
    int year;
    std::string model;
    std::string make;
    Car(const Car &other);
    virtual ~Car();
    virtual void drive() const;
    Car &operator=(const Car &other);
};
