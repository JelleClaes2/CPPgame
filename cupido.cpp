#include "cupido.h"
#include <iostream>

void Cupido::actieNacht(std::vector <Speler*> spelersVector){
    //std::cout<<"De eeste nacht koppel ik 2 spelers als de ene sterft sterft de andere ook"<<std::endl;
    std::string naamGeliefde1;
    std::string naamGeliefde2;
    std::cout << "Jij mag 2 spelers aan elkaar koppelen als 1 persoon vermoordt wordt gaat de andere ook dood aan liefdes verdriet." << std::endl;
    std::cout << "Typ de naam van speler 1" << std::endl;
    std::cin >> naamGeliefde1;
    std::cout << "Typ de naam van speler 2" << std::endl;
    std::cin >> naamGeliefde2;

    for(Speler* spelersLiefde: spelersVector){
        if(naamGeliefde1 == spelersLiefde->getNaam()){
            spelersLiefde->setVerliefd(1);
        }else if(naamGeliefde2 == spelersLiefde->getNaam()){
            spelersLiefde->setVerliefd(1);
        } else {
            spelersLiefde->setVerliefd(0);
        }
    }

    std::cout << this->naam << " jij mag weer gaan slapen" << std::endl;
    std::cout << "Duw op enter om de namen te zien van het koppel" << std::endl;
    getchar();
    std::cout << naamGeliefde1 << " en " << naamGeliefde2 << " kijk elkaar liefdevol in de ogen <3" << std::endl;
}

enum ROLLEN Cupido::getRol(){
    return CUPIDO;
}
