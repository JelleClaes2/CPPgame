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
    switch(aantalSpelers){
    case 8:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* weerWolf = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=5 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 9:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=6 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 10:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=7 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 11:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=8 ; i++){
            naamWeerwolven = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 12:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=8 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 13:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=9 ; i++){
            naamWeerwolven = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        spelersVector.push_back(new Heks("heks"));
        //Heks* heks = new Heks(heks);
        break;

    case 14:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=10 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 15:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=11 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 16:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=12 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 17:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=13 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;

    case 18:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(new Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=14 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(new Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(new Heks("heks"));
        break;
    }

    std::shuffle(spelersVector.begin(), spelersVector.end(), std::default_random_engine(std::time(0)));

}

void Spel::nacht(){
    for (Speler* spelers: spelersVector){
        spelers->actieNacht();
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

void Spel::getRollen(){
    int i=0;
    for (Speler* spelers: spelersVector){
        std::cout<< spelers->getNaam()<< " Duuw op enter om je rol te zien"<<std::endl;
        if(i == 0){
            while(getchar() != '\n');
        }
        i++;
        getchar();
        std::cout<< spelers->getNaam()<< " Jouw rol is "<< spelers->getRol()<<std::endl;
        std::cout<<"Geef de laptop door aan de volgende speler"<< std::endl<<std::endl;
    }
}

void Spel::stemVoorBurgemeester(){
    std::map<std::string, int> stemmen;

    for(Speler* spelers: spelersVector){
        std::string stem_op;
        do {
            std::cout << spelers->getNaam() << ", op welke speler stem je? ";
            std::cin >> stem_op;

            // Controleer of de speler niet op zichzelf stemt
            if (stem_op == spelers->getNaam()) {
                std::cout << "Je kunt niet op jezelf stemmen." << std::endl;
            }
        } while (stem_op == spelers->getNaam());

        // Tel de stemmen
        stemmen[stem_op]++;
    }
    auto winnaar = std::max_element(stemmen.begin(), stemmen.end(), [](const auto& p1, const auto& p2) {return p1.second < p2.second;});

    for(Speler* spelers: spelersVector){
        if(spelers->getNaam() == winnaar->first){
            spelers->setBurgemeester(1); // Set burgemeester voor de winaar
        }
    }

    std::cout << winnaar->first << " is de nieuwe burgemeester met " << winnaar->second << " stemmen!" << std::endl;

}
