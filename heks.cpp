#include "heks.h"

#include <iostream>

void Heks::actieNacht(std::vector <Speler*> spelersVector){

    if(getTotLevenGebracht() == 0){
        for(Speler* spelers: spelersVector){
            if(spelers->getIsVermoord() == 1){
                bool Revive;
                std::cout << spelers->getNaam() << " is vermoord" << std::endl;
                std::cout << "Wil je deze persoon inleven houden of niet?" << std::endl;
                std::cout << getNaam() << " je mag maar 1 iemand tot leven brengen" << std::endl;
                std::cout << "type 1 voor deze speler tot leven te brengen en 0 voor deze speler dood te laten" << std::endl;

                std::cin >> Revive;

                if(Revive == 1){
                    spelers->setIsVermoord(0);
                }
            }
        }
        if(getVergiftigd() == 0){
            bool wilVergiftigen;

            std::cout << getNaam() << " Wil je nog iemand extra vermoorden?" << std::endl;
            std::cout << "Type 1 om iemand extra te vermooren en 0 voor niemand te vermoorden" << std::endl;

            std::cin >> wilVergiftigen;

            if(wilVergiftigen == 1){
                std::string naamVergiftigd;
                std::cout << "Type de naam van de speler die je wilt vergiftigen" << std::endl;
                std::cin >> naamVergiftigd;

                for(Speler* spelers: spelersVector){
                    if(spelers->getNaam() == naamVergiftigd){
                        spelers->setIsVermoord(1);
                        setVergiftigd(1);
                    }
                }
            }
        }
    }




    //std::cout<< getNaam() << " Mag iemand 1 keer tot leven brengen en 1 keer iemand extra vermoorden" << std::endl;
}

enum ROLLEN Heks::getRol(){
    return HEKS;
}


void Heks::setTotLevenGebracht(bool totLevenGebracht){
    this->totLevenGebracht = totLevenGebracht;
}

bool Heks::getTotLevenGebracht(){
    return totLevenGebracht;
}

void Heks::setVergiftigd(bool vergiftigd){
    this->vergiftigd = vergiftigd;
}

bool Heks::getVergiftigd(){
    return vergiftigd;
}
