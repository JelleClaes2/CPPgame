#include "burger.h"
#include<iostream>

void Burger::actieNacht(){
    std::cout<< getNaam() << " Slaapt" << std::endl;
}


std::string Burger::getRol(){
    return "Burger";
}
