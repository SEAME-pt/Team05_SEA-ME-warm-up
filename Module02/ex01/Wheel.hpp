#pragma once

#include "Part.hpp"
#include <iostream>

class Wheel : public Part
{
  public:
    Wheel();
    Wheel(const Wheel &other);
    ~Wheel();
    Wheel &operator=(const Wheel &other);
    void print() const override;
    void set_type(std::string type_);

  private:
    std::string type;
};
