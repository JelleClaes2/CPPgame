#include "spel.h"

Spel::Spel(int aantalSpelers)
{
    this->aantalSpelers = aantalSpelers;
}

void Spel::VoegSpelersToe(int aantalSpelers){
    std::string naamWeerwolven;
    std::string naamBurger;
    switch(aantalSpelers){
    case 8:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* weerWolf = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=5 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 9:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=6 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 10:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=7 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 11:
        for(int i = 1 ; i<=2 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=8 ; i++){
            naamWeerwolven = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 12:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=8 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 13:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=9 ; i++){
            naamWeerwolven = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        spelersVector.push_back(Heks("heks"));
        //Heks* heks = new Heks(heks);
        break;

    case 14:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=10 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 15:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=11 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 16:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=12 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 17:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=13 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;

    case 18:
        for(int i = 1 ; i<=3 ; i++){
            naamWeerwolven = "Weerwolf" + std::to_string(i);
            //Weerwolf* naamWeerwolven = new Weerwolf(naamWeerwolven);
            spelersVector.push_back(Weerwolf(naamWeerwolven));
        }

        for(int i=1; i<=14 ; i++){
            naamBurger = "Burger" + std::to_string(i);
            //Burger* naamBurger = new Burger(naamBurger);
            spelersVector.push_back(Burger(naamBurger));
        }

        //Heks* heks = new Heks(heks);
        spelersVector.push_back(Heks("heks"));
        break;
    }
}

void Spel::nacht(int aantalSpelers){
    for (const auto& speler : spelersVector){
        speler.actieNacht();
    }
}
