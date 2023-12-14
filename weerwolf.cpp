#include "weerwolf.h"

#include <iostream>

void Weerwolf::actieNacht(){
    std::cout<< "Weerwolf mag iemand vermoorden"<<std::endl;
}

enum ROLLEN Weerwolf::getRol(){
    return WEERWOLF;
}
