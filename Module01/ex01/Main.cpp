#include "SportsCar.hpp"

int main () {
    Car *c = new Car;
    SportsCar *sc = new SportsCar;
    c->make = "bmv";
    c->model = "e90";
    c->year = 2007;
    c->drive();
    sc->make = "bmw";
    sc->model = "e36";
    sc->year = 1998;
    sc->top_speed = 260;
    sc->drive();
    delete c;
    delete sc;
}