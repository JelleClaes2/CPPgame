#ifndef JAGER_H
#define JAGER_H
#include "burger.h"

class Jager : public Burger
{
public:
    Jager(std::string naam):Burger(naam){}
    void actieNacht();
    enum ROLLEN getRol();
};

#endif // JAGER_H
