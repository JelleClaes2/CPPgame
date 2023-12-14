#ifndef HEKS_H
#define HEKS_H
#include "burger.h"


class Heks : public Burger
{
public:
    Heks(std::string naam):Burger(naam){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();
};

#endif // HEKS_H
