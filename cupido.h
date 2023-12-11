#ifndef CUPIDO_H
#define CUPIDO_H
#include "burger.h"


class Cupido : public Burger
{
public:
    Cupido(std::string naam):Burger(naam){}
    void actieNacht();
    std::string getRol();
};

#endif // CUPIDO_H
