#include "heks.h"

#include <iostream>

void Heks::actieNacht(){
    std::cout<< getNaam() << " Mag iemand 1 keer tot leven brengen en 1 keer iemand extra vermoorden" << std::endl;
}

std::string Heks::getRol(){
    return "Heks";
}
