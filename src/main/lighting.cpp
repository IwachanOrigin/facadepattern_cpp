
#include "lighting.h"
#include <iostream>

namespace dp = design_pattern;

void dp::Lighting::lightOn(int room)
{
    switch (room)
    {
    case 0:
        std::cout << "Turned on the light in the living room." << std::endl;
        break;
    case 1:
        std::cout << "Turned on the light in the bedroom." << std::endl;
        break;
    default:
        std::cout << "There's no room to turn on the light." << std::endl;
        break;
    }
}

void dp::Lighting::lightOff(int room)
{
    switch (room)
    {
    case 0:
        std::cout << "Turned off the light in the living room." << std::endl;
        break;
    case 1:
        std::cout << "Turned off the light in the bedroom." << std::endl;
        break;
    default:
        std::cout << "There's no room to turn off the light." << std::endl;
        break;
    }
}
