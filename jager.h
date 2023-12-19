#ifndef JAGER_H
#define JAGER_H
#include "burger.h"

class Jager : public Burger
{
public:
    Jager(std::string naam):Burger(naam){}
    Jager():Burger("Jager"){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();

    ~Jager(){}
};

#endif // JAGER_H
