#pragma once

#include "Part.hpp"
#include <iostream>

class Brake : public Part
{
  public:
    Brake();
    Brake(const Brake &other);
    ~Brake();
    Brake &operator=(const Brake &other);
    void print() const override;
    void set_type(std::string type_);

  private:
    std::string type;
};
