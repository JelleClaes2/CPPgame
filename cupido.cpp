#include "cupido.h"
#include <iostream>

void Cupido::actieNacht(){
    //std::cout<<"De eeste nacht koppel ik 2 spelers als de ene sterft sterft de andere ook"<<std::endl;
    std::string naamGeliefde1;
    std::string naamGeliefde2;
    std::cout << "Jij mag 2 spelers aan elkaar koppelen als 1 persoon vermoordt wordt gaat de andere ook dood aan liefdes verdriet." << std::endl;
    std::cout << "Typ de naam van speler 1" << std::endl;
    std::cin >> naamGeliefde1;
    std::cout << "Typ de naam van speler 2" << std::endl;
    std::cin >> naamGeliefde2;
}

enum ROLLEN Cupido::getRol(){
    return CUPIDO;
}
