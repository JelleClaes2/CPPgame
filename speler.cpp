#include "speler.h"

#include<iostream>

void Speler::setNaam(std::string naam){
    this->naam = naam;
}

std::string Speler::getNaam(){
    return naam;
}

void Speler::setBurgemeester(bool burgemeester){
    this->burgermeester = burgemeester;
}

bool Speler::getBurgemeester(){
    return burgermeester;
}
