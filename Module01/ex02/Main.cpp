#include "SportsCar.hpp"

int main () {
    Car *sc = new SportsCar; //polymorphism
    sc->make = "BMW";
    sc->model = "M3 E36";
    sc->year = 1997;
    SportsCar *sc1 = dynamic_cast<SportsCar*>(sc); //downcasting so that set_topspeed works
    if (sc1) {
        sc1->set_topspeed(260);
        CarActions::performActions(sc1); //modular
    }
    else {
        std::cerr << "Failed to downcast to SportsCar." << std::endl;
    }
    //sc->drive();
    delete sc;
}