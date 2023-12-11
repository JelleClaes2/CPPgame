#ifndef WEERWOLF_H
#define WEERWOLF_H

#include "speler.h"
#include <string>


class Weerwolf : public Speler
{
public:
    Weerwolf(std::string naam) : Speler(naam){}
    void actieNacht();
    std::string getRol();
};

#endif // WEERWOLF_H
