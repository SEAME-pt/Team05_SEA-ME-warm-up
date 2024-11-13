#pragma once

#include "Part.hpp"
#include <iostream>

class Transmission : public Part
{
  public:
    Transmission();
    Transmission(const Transmission &other);
    ~Transmission();
    Transmission &operator=(const Transmission &other);
    void print() const override;
    void set_type(std::string type_);

  private:
    std::string type;
};
