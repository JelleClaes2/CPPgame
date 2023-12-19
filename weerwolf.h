#ifndef WEERWOLF_H
#define WEERWOLF_H

#include "speler.h"
#include <string>


class Weerwolf : public Speler
{
public:
    Weerwolf(std::string naam) : Speler(naam){}
    Weerwolf(Weerwolf &weerwolf): Speler(weerwolf.naam){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();
};

#endif // WEERWOLF_H
