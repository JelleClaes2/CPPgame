#include "ziener.h"
#include "spel.h"
#include <iostream>

void Ziener::actieNacht(std::vector <Speler*> spelersVector){
    std::string naamSpeler;
    std::cout << getNaam() << " welke speler zijn rol wil je zien?" << std::endl;
    std::cin >> naamSpeler;

    for(Speler* spelers: spelersVector){
        if(spelers->getNaam() == naamSpeler){
            std::cout << Spel::displayRol( spelers->getRol()) << std::endl;
        }
    }

    //std::cout<<"Ik mag elke nacht een speler zijn rol bekijken" << std::endl;
}

enum ROLLEN Ziener::getRol(){
    return ZIENER;
}
