#include "heks.h"

#include <iostream>

void Heks::actieNacht(std::vector <Speler*> spelersVector){
    std::cout<< getNaam() << " Mag iemand 1 keer tot leven brengen en 1 keer iemand extra vermoorden" << std::endl;
}

enum ROLLEN Heks::getRol(){
    return HEKS;
}
