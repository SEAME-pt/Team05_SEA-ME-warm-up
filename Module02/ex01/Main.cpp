#include "Car.hpp"

int main() {
    Car myCar;
    myCar.set_model("Bmw e90");
    myCar.get_wheel()->set_type("Saloon Alloy");
    myCar.get_engine()->set_type("Petrol");
    myCar.get_brakes()->set_type("Disc");
    myCar.get_transmission()->set_type("6-speed manual");
    myCar.print();
    
    return 0;
}