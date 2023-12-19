#ifndef BURGER_H
#define BURGER_H

#include "speler.h"
#include <string>
#include<iostream>


class Burger : public Speler
{
public:
    Burger(std::string naam):Speler(naam){}
    Burger(Burger &burger):Speler(burger.naam){
        this->setIsVermoord(burger.getIsVermoord());
        this->setBurgemeester(burger.getBurgemeester());
        this->setVerliefd(burger.getVerliefd());
    }
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();

    ~Burger(){}
};

#endif // BURGER_H
