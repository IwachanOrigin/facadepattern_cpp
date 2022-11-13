
#include "bath.h"
#include <iostream>

namespace dp = design_pattern;

void dp::Bath::switchOn(int temp)
{
    std::cout << "Starts heating the bath. The Temperature is " << temp << " . " << std::endl;
}

void dp::Bath::switchOff()
{
    std::cout << "Stop heating the bath." << std::endl;
}
