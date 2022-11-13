
#include "homectrlfacade.h"
#include "lighting.h"
#include "television.h"
#include "airconditioner.h"
#include "bath.h"

#include <memory>

namespace dp = design_pattern;

void dp::HomeCtrlFacade::homeCtrlPreset()
{
    std::unique_ptr<Lighting> pLighting(new Lighting());
    std::unique_ptr<Television> pTelevision(new Television());
    std::unique_ptr<AirConditioner> pAirConditioner(new AirConditioner());
    std::unique_ptr<Bath> pBath(new Bath());

    pLighting->lightOn(0);
    pTelevision->tvOn(8, 10);
    pAirConditioner->airConOn(1, 28);
    pBath->switchOn(42);
}


