#include "spel.h"

#include <algorithm>
#include <ctime>
#include <random>
#include <iostream>
#include <map>

Spel::Spel(int aantalSpelers)
{
    this->aantalSpelers = aantalSpelers;
}

void Spel::voegSpelersToe(int aantalSpelers){
    std::string naamWeerwolven;
    std::string naamBurger;

    int aantalWeerwolven = 2;



    if(aantalSpelers >= 12){
        aantalWeerwolven = 3;
    }

    int aantalSpecialeBurgers= aantalSpelers/3;



    int aantalBurgers = aantalSpelers - aantalWeerwolven - aantalSpecialeBurgers;

    //voeg weerwolven toe
    for(int i = 1 ; i<=aantalWeerwolven ; i++){
        naamWeerwolven = "Weerwolf" + std::to_string(i);
        spelersVector.push_back(new Weerwolf(naamWeerwolven));
    }

    //voeg burgers toe
    for(int i=1; i<=aantalBurgers ; i++){
        naamBurger = "Burger" + std::to_string(i);
        //Burger* naamBurger = new Burger(naamBurger);
        spelersVector.push_back(new Burger(naamBurger));
    }

    //voeg speciale burgers toe
    std::vector<Speler*>specialeBurgerVector;
    specialeBurgerVector.push_back(new Cupido("Cupido"));
    specialeBurgerVector.push_back(new Dief("Dief"));
    specialeBurgerVector.push_back(new Heks("Heks"));
    specialeBurgerVector.push_back(new Jager("Jager"));
    specialeBurgerVector.push_back(new Ziener("Ziener"));

    std::shuffle(specialeBurgerVector.begin(), specialeBurgerVector.end(), std::default_random_engine(std::time(0)));

    for(int i=1 ; i<= aantalSpecialeBurgers ;i++){
        spelersVector.push_back(specialeBurgerVector[i - 1]);
    }

    std::shuffle(spelersVector.begin(), spelersVector.end(), std::default_random_engine(std::time(0)));
}

void Spel::eersteNacht(){
    std::cout << "Al de inwoners van het dorp mogen gaan slapen" << std::endl;

    Speler* dief = vindSpeler(DIEF);

    if(dief != nullptr){
        dief->actieNacht(spelersVector);
        toonRollen();
    }

    Speler* cupido = vindSpeler(CUPIDO);

    if(cupido != nullptr){
        cupido->actieNacht(spelersVector);
    }

    nacht();
}

void Spel::nacht(){
    Speler* ziener = vindSpeler(ZIENER);

    if(ziener != nullptr){
        ziener->actieNacht(spelersVector);
    }
}

void Spel::vulNamenIn(){
    int i= 0;
    for (Speler* spelers: spelersVector){
        i++;
        std::string naam;
        std::cout << "Wat is de naam van speler " << i << std::endl;
        std::cin >> naam;
        spelers->setNaam(naam);
    }
}

void Spel::toonRollen(){
    int i=0;
    for (Speler* spelers: spelersVector){
        std::cout<< spelers->getNaam()<< " Duuw op enter om je rol te zien"<<std::endl;
        if(i == 0){
            while(getchar() != '\n');
        }
        i++;
        getchar();
        std::cout<< spelers->getNaam()<< " Jouw rol is "<< displayRol(spelers->getRol())<<std::endl;
        std::cout<<"Geef de laptop door aan de volgende speler"<< std::endl<<std::endl;
    }
}

void Spel::stemVoorBurgemeester(){
    std::map<std::string, int> stemmen;
    std::map<std::string, int>::iterator it;
    int maxWaarden = 0;
    std::string winnaar;

    for(Speler* spelers: spelersVector){
        std::string stem_op;
        do {
            std::cout << spelers->getNaam() << ", op welke speler stem je voor de burgemeester te zijn? ";
            std::cin >> stem_op;

            // Controleer of de speler niet op zichzelf stemt
            if (stem_op == spelers->getNaam()) {
                std::cout << "Je kunt niet op jezelf stemmen." << std::endl;
            }
        } while (stem_op == spelers->getNaam());

        // Tel de stemmen
        stemmen[stem_op]++;
    }

    for(it = stemmen.begin(); it != stemmen.end(); it++){
        std::cout << it->first << " " << it->second << std::endl;
        if(it->second >= maxWaarden){
            winnaar = it->first;
            maxWaarden = it->second;
        }
    }

    for(Speler* spelers: spelersVector){
        if(spelers->getNaam() == winnaar){
            spelers->setBurgemeester(1); // Set burgemeester voor de winaar
        }
    }

    std::cout << winnaar << " is de nieuwe burgemeester met " << maxWaarden << " stemmen!" << std::endl;
}

void Spel::stemVoorVerbaning(){
    std::map<std::string, int> stemmen;
    std::map<std::string, int>::iterator it;
    int maxWaarden = 0;
    std::string winnaar;

    for(Speler* spelers: spelersVector){
        std::string stem_op;
        do {
            std::cout << spelers->getNaam() << ", op welke speler stem je om iemand te verbannen? ";
            std::cin >> stem_op;

            // Controleer of de speler niet op zichzelf stemt
            if (stem_op == spelers->getNaam()) {
                std::cout << "Je kunt niet op jezelf stemmen." << std::endl;
            }
        } while (stem_op == spelers->getNaam());

        if(spelers->getBurgemeester() == 1){
            stemmen[stem_op] += 2;
        }else{
            stemmen[stem_op]++;
        }

    }

    for(it = stemmen.begin(); it != stemmen.end(); it++){
        std::cout << it->first << " " << it->second << std::endl;
        if(it->second >= maxWaarden){
            winnaar = it->first;
            maxWaarden = it->second;
        }
    }

    for(Speler* spelers: spelersVector){
        if(spelers->getNaam() == winnaar){
            std::cout << spelers->getNaam() << " jij bent verbannen" << std::endl;
            std::cout << "Jouw rol was: " << displayRol(spelers->getRol());
            spelers->setIsVermoord(1);
            verwijderSpeler();
        }
    }
}


Speler* Spel::vindSpeler(ROLLEN rol){
    for(Speler* spelers: spelersVector){
        if(spelers->getRol() == rol){
            return spelers;
        }
    }
    return nullptr;
}

void Spel::dag(){
    std::cout<< "Iedereen mag weer wakker" << std::endl;

    for(Speler* spelers: spelersVector){
        if(spelers->getIsVermoord() == 1){
            std::cout<< spelers->getNaam() << " jij bent vancht vermoord" << std::endl;
            std::cout << "Jouw rol was: " << displayRol(spelers->getRol());
            verwijderSpeler();
        }
    }

    std::cout << "We gaan stemmen stemmen om een verdacht persoon te vermoorden van het dorp" << std::endl;

    stemVoorVerbaning();
}

void Spel::verwijderSpeler(){
    std::vector<Speler*>::iterator it ;

    for(it = spelersVector.begin() ; it != spelersVector.end() ; it++ ){
        if((*it)->getIsVermoord() == 1){
            if((*it)->getRol() == JAGER){
                std::string doodGeschoten;
                std::cout << (*it)->getNaam() << " je mag nog iemand mee je graf in nemen wie kies je?" << std::endl;
                std::cin >> doodGeschoten;

                std::vector<Speler*>::iterator itJager;
                for(itJager = spelersVector.begin() ; itJager != spelersVector.end() ; itJager++){
                    if((*it)->getNaam() == doodGeschoten){
                        spelersVector.erase(itJager);
                        delete(*itJager);
                    }
                }
            }

            if((*it)->getVerliefd() == 1){
                std::vector<Speler*>::iterator itVerliefd;
                for(itVerliefd= spelersVector.begin() ; itVerliefd !=spelersVector.end() ; itVerliefd++){
                    if(((*itVerliefd)->getIsVermoord() == 0) && ((*itVerliefd)->getVerliefd() == 1)  ){
                        spelersVector.erase(itVerliefd);
                        delete(*itVerliefd);
                    }
                }

            }
            spelersVector.erase(it);
            delete(*it);
        }
    }
}

std::string Spel::displayRol(ROLLEN rol){
    switch (rol) {
    case WEERWOLF:
        return "Weerwolf";
    case BURGER:
        return "Burger";
    case HEKS:
        return "Heks";
    case CUPIDO:
        return "Cupido";
    case DIEF:
        return "Dief";
    case JAGER:
        return "Jager";
    case ZIENER:
        return "Ziener";
    default:
        return "onbekende rol";
    }
}

void Spel::vermoorden(){
    std::map<std::string, int> stemmen;
    std::map<std::string, int>::iterator it;
    int maxWaarden = 0;
    std::string winnaar;

    for(Speler* spelers: spelersVector){
        if(spelers->getRol() == WEERWOLF){
            std::string stemOp;
            std::cout << spelers->getNaam() << " op welke speler wil jij vermoorden?" << std::endl;
            std::cin >> stemOp;

            stemmen[stemOp]++;

            for(it = stemmen.begin(); it != stemmen.end(); it++){
                if(it->second >= maxWaarden){
                    winnaar = it->first;
                    maxWaarden = it->second;
                }
            }

            for(Speler* spelers: spelersVector){
                if(spelers->getNaam() == winnaar){
                    spelers->setIsVermoord(1);
                }
            }
        }
    }
}


bool Spel::checkEindeSpel(){
    int aantalWeerwolven = 0;
    int aantalBurgers = 0;
    for(Speler* spelers: spelersVector){
        if(spelers->getRol() == WEERWOLF){
            aantalWeerwolven ++;
        } else{
            aantalBurgers++;
        }
    }

    if(aantalWeerwolven == 0){
        std::cout << "De burgers hebben gewonnen" << std::endl;
        return 0;
    } else if(aantalBurgers == 0){
        std::cout << "De weerwolven hebben gewonnen" << std::endl;
        return 0;
    }else if(((aantalBurgers + aantalWeerwolven) == 2) && (spelersVector[0]->getVerliefd() == 1) ){
        std::cout << "Het kopeltje heeft gewonnen" << std::endl;
        return 0;
    } else {
        return 1;
    }
}
