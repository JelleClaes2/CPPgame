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
    if(aantalNachten == 0){
        std::cout << "Al de inwoners van het dorp mogen gaan slapen" << std::endl;
        for(Speler* spelers: spelersVector){
            if(spelers->getRol() == "Cupido"){
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
                std::cout << spelers->getNaam() << " jij mag weer gaan slapen" << std::endl;
                std::cout << "Duw op enter om de namen te zien van het koppel" << std::endl;
                getchar();
                std::cout << naamGeliefde1 << " en " << naamGeliefde2 << " kijk elkaar liefdevol in de ogen <3" << std::endl;
            }
        }
    }



    //for (Speler* spelers: spelersVector){
        //spelers->actieNacht();
    //}
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
        std::cout<< spelers->getNaam()<< " Jouw rol is "<< spelers->getRol()<<std::endl;
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

        // Tel de stemmen
        stemmen[stem_op]++;
    }

    //zelfde als stemmen voor burgemeester
}

std::vector <Speler*> Spel::getSpelersVector(){
    return spelersVector;
}

Speler* Spel::vindSpeler(rollen rol){
    for(Speler* spelers: spelersVector){
        if(spelers->getRol() == rol){
            return spelers;
        }
    }
    return 0;
}
