#ifndef CUPIDO_H
#define CUPIDO_H
#include "burger.h"


class Cupido : public Burger
{
public:
    Cupido(std::string naam):Burger(naam){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();
};

#endif // CUPIDO_H
