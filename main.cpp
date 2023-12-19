#include "spel.h"
#include"iostream"

#define MINSPELERS 8
#define MAXSPELERS 18

int main(int argc, char *argv[])
{
    int aantalSpelers;
    std::cout << "Selecteer een aantal spelers tussen de 8 en de 18" << std::endl;
    std::cin >> aantalSpelers;

    while(1){
        if(aantalSpelers>=MINSPELERS){
            if(aantalSpelers <=MAXSPELERS){
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
