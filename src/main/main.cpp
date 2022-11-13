
#include <iostream>
#include "homectrlfacade.h"

using namespace design_pattern;

int main(int argc, char* argv[])
{
    // HomeCtrlFacade class is the facade pattern interface.
    // Client side is only know this interface.
    HomeCtrlFacade hcf;
    hcf.homeCtrlPreset();
    return 0;
}

