#pragma once

# include <iostream>
#include "Transmission.hpp"
#include "Engine.hpp"
#include "Wheel.hpp"
#include "Brake.hpp"
# include <memory>


class Car {
	public:
		Car(const Car &other);
		Car() {
        //smart pointers
        engine_ = std::make_unique<Engine>();
        transmission_ = std::make_unique<Transmission>();
        wheels_ = std::make_unique<Wheel>();
        brakes_ = std::make_unique<Brake>();
    }
    //getters
    Wheel * get_wheel(void) {
        return wheels_.get();
    }
    Transmission *get_transmission(void) {
        return transmission_.get();
    }
    Brake *get_brakes(void) {
        return brakes_.get();
    }
    Engine *get_engine(void) {
        return engine_.get();
    }

    void print() {
        std::cout << "Car: " << model << ".\n";
        engine_->print();
        transmission_->print();
        wheels_->print();
        brakes_->print();
    }

    void set_model(std::string model_) {
        model = model_;
    }
    
    ~Car();
	Car&	operator=(const Car &other);
    
    private:
        std::string model;
        std::unique_ptr <Engine> engine_;
        std::unique_ptr <Transmission> transmission_;
        std::unique_ptr <Wheel> wheels_;
        std::unique_ptr <Brake> brakes_;

};
