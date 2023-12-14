#include "dief.h"
#include <iostream>

void Dief::actieNacht(){
    std::cout<<"Ik mag iemand zijn rol stelen"<<std::endl;
}

enum ROLLEN Dief::getRol(){
    return DIEF;
}
