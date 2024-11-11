#include "SportsCar.hpp"

int main () {
    Car *c = new Car;
    SportsCar *sc = new SportsCar;
    c->make = "BMW";
    c->model = "E90";
    c->year = 2007;
    c->drive();
    sc->make = "BMW";
    sc->model = "M3 E36";
    sc->year = 1997;
    sc->top_speed = 260;
    sc->drive();
    delete c;
    delete sc;
}