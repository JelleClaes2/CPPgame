#include "ziener.h"
#include <iostream>

void Ziener::actieNacht(std::vector <Speler*> spelersVector){
    std::cout<<"Ik mag elke nacht een speler zijn rol bekijken" << std::endl;
}

enum ROLLEN Ziener::getRol(){
    return ZIENER;
}
