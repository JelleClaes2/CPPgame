#include "spel.h"
#include"iostream"

int main(int argc, char *argv[])
{
    int aantalSpelers;
    std::cout << "Selecteer een aantal spelers tussen de 8 en de 18" << std::endl;
    std::cin >> aantalSpelers;

    while(1){
        if(aantalSpelers>=8){
            if(aantalSpelers <=18){
                std::cout << "Het spel wordt aangemaakt" << std::endl;
                break;
            }
            else {
                std::cout << "Aantal spelers moet tussen de 8 en de 18 liggen" <<std::endl;
                std::cin >> aantalSpelers;
            }
        } else {
            std::cout << "Aantal spelers moet tussen de 8 en de 18 liggen" <<std::endl;
            std::cin >> aantalSpelers;
        }
    }

    Spel* nieuwSpel = new Spel(aantalSpelers);
    nieuwSpel->voegSpelersToe(aantalSpelers);
    nieuwSpel->vulNamenIn();
    //nieuwSpel->nacht();
    nieuwSpel->toonRollen();
    nieuwSpel->eersteNacht();
    nieuwSpel->stemVoorBurgemeester();

    return 0;
}
