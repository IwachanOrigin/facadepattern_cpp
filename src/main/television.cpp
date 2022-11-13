
#include "television.h"
#include <iostream>

namespace dp = design_pattern;

void dp::Television::tvOn(int ch, int vol)
{
    std::cout << "The television was powered on.";
    std::cout << "The channel is " << ch << ". ";
    std::cout << "The volume is " << vol << "." << std::endl;
}

void dp::Television::tvOff()
{
    std::cout << "The television was powered off." << std::endl;
}
