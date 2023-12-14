#include "jager.h"
#include<iostream>

void Jager::actieNacht(std::vector <Speler*> spelersVector){
    std::cout<<"Als ik vermoord wordt snachts schiet ik nog iemand dood" <<std::endl;
}

enum ROLLEN Jager::getRol(){
    return JAGER;
}
