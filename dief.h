#ifndef DIEF_H
#define DIEF_H
#include "burger.h"


class Dief : public Burger
{
public:
    Dief(std::string naam):Burger(naam){}
    void actieNacht();
    std::string getRol();
};

#endif // DIEF_H
