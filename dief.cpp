#include "dief.h"
#include <iostream>

void Dief::actieNacht(std::vector <Speler*> spelersVector){
    //std::cout<<"Ik mag iemand zijn rol stelen"<<std::endl;
    std::string naamWissel;
    do{
    std::cout << getNaam() << " met wie wil je van rol wissellen?" << std::endl;
    std::cin >> naamWissel;

    for(Speler* spelers: spelersVector){
        if(spelers->getNaam() == naamWissel){
            spelers->setNaam(this->naam);
            this->naam = naamWissel;
            return;
        }
    }
    } while(1);
}

enum ROLLEN Dief::getRol(){
    return DIEF;
}
