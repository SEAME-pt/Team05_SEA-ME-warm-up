#include "../Car.hpp"
#include <gtest/gtest.h>

TEST(CarTest, Model)
{
    Car myCar;
    myCar.set_model("BMW E90 318d");
    myCar.get_wheel()->set_type("Light Alloy 17\" Style 160");
    myCar.get_engine()->set_type("Diesel");
    myCar.get_brakes()->set_type("Ventilated Disc");
    myCar.get_transmission()->set_type("6-Speed Manual");
    Details::print_details(&myCar);

    EXPECT_EQ(myCar.get_model(), "BMW E90 318d");
}
