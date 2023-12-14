#include "burger.h"
#include<iostream>

void Burger::actieNacht(std::vector <Speler*> spelersVector){
    std::cout<< getNaam() << " Slaapt" << std::endl;
}


enum ROLLEN Burger::getRol(){
    return BURGER;
}
