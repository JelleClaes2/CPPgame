#ifndef DIEF_H
#define DIEF_H
#include "burger.h"


class Dief : public Burger
{
public:
    Dief(std::string naam):Burger(naam){}
    void actieNacht();
    enum ROLLEN getRol();
};

#endif // DIEF_H
