
#include "airconditioner.h"
#include <iostream>

namespace dp = design_pattern;

void dp::AirConditioner::airConOn(int sts, int temp)
{
    std::cout << "The airconditioner was powered on. ";
    if (sts == 0)
    {
        std::cout << "The heating temperature is " << temp << " ." << std::endl;
    }
    else
    {
        std::cout << "The temperature of the air conditioner is" << temp << " ." << std::endl;
    }
}

void dp::AirConditioner::airConOff()
{
    std::cout << "The airconditioner was powered off." << std::endl;
}
