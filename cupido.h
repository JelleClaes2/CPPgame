#ifndef CUPIDO_H
#define CUPIDO_H
#include "burger.h"


class Cupido : public Burger
{
public:
    Cupido(std::string naam):Burger(naam){}
    Cupido():Burger("Cupido"){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();

    ~Cupido(){}
};

#endif // CUPIDO_H
