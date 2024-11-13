#pragma once

#include <iostream>

// abstract class
class Part
{
  public:
    Part();
    Part(const Part &other);
    ~Part();
    Part &operator=(const Part &other);
    virtual void print() const = 0;
};
