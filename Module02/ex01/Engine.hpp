#pragma once

#include "Part.hpp"
#include <iostream>

class Engine : public Part
{
  public:
    Engine();
    Engine(const Engine &other);
    ~Engine();
    Engine &operator=(const Engine &other);
    void print() const override;
    void set_type(std::string type_);

  private:
    std::string type;
};
