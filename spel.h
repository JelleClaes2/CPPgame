#ifndef SPEL_H
#define SPEL_H

#define MINSPELERS 8
#define MAXSPELERS 18
#include "speler.h"
#include <vector>


class Spel
{
public:
    Spel(int aantalSpelers);
    std::vector<Speler> VoegSpelersToe(int aantalSpelers);

private:
    int aantalSpelers;
    std::vector<Speler> spelersVector;


};

#endif // SPEL_H
