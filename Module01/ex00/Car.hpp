#pragma once
#include <iostream>

class Car
{
  public:
    Car();
    Car(const Car &other);
    ~Car();
    Car &operator=(const Car &other);
    std::string name;
    int speed;
};
