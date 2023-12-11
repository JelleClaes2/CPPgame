#ifndef HEKS_H
#define HEKS_H
#include "burger.h"


class Heks : public Burger
{
public:
    Heks(std::string naam):Burger(naam){}
    void actieNacht();
    std::string getRol();
};

#endif // HEKS_H
