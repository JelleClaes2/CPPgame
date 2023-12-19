#ifndef DIEF_H
#define DIEF_H
#include "burger.h"


class Dief : public Burger
{
public:
    Dief(std::string naam):Burger(naam){}
    Dief():Burger("Dief"){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();

    ~Dief(){}
};

#endif // DIEF_H
