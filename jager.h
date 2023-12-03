#ifndef JAGER_H
#define JAGER_H
#include "burger.h"

class Jager : public Burger
{
public:
    Jager(std::string naam):Burger(naam){}
    void actieNacht();
};

#endif // JAGER_H
