#ifndef SPEL_H
#define SPEL_H

#define MINSPELERS 8
#define MAXSPELERS 18

#include "speler.h"
#include "burger.h"
#include "heks.h"
#include "weerwolf.h"

#include <vector>


class Spel
{
public:
    Spel(int aantalSpelers);
    void voegSpelersToe(int aantalSpelers);
    void vulNamenIn();
    void nacht();
    void getRollen();
    void stemVoorBurgemeester(void);
private:
    int aantalSpelers;
    std::vector<Speler*> spelersVector;


};

#endif // SPEL_H
