#include "burger.h"
#include<iostream>

void Burger::actieNacht(){
    std::cout<< getNaam() << " Slaapt" << std::endl;
}


enum ROLLEN Burger::getRol(){
    return BURGER;
}
