// Car.hpp
#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

class Car {
private:
    int position;
    int speed;
    int direction;

public:
    Car();                          
    Car(int pos, int spd, int dir); 
    Car(const Car& other);          
    Car& operator=(const Car& other); 
    ~Car();                         

    
    void move();
    void positionChanged(int newPosition);

    // Getters and Setters
    int getPosition() const;
    int getSpeed() const;
    int getDirection() const;
    void setPosition(int pos);
    void setSpeed(int spd);
    void setDirection(int dir);
};

#endif
