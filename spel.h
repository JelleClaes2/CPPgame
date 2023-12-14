#ifndef SPEL_H
#define SPEL_H

#define MINSPELERS 8
#define MAXSPELERS 18

#include "speler.h"
#include "burger.h"
#include "heks.h"
#include "weerwolf.h"
#include "dief.h"
#include "cupido.h"
#include "jager.h"
#include "ziener.h"
#include "rollen.h"

#include <vector>


class Spel
{
public:
    Spel(int aantalSpelers);
    void voegSpelersToe(int aantalSpelers);
    void vulNamenIn();
    void eersteNacht();
    void nacht();
    void toonRollen();
    void stemVoorBurgemeester(void);
    void stemVoorVerbaning(void);
    std::vector<Speler*> getSpelersVector(void);
    Speler* vindSpeler(ROLLEN rol);

private:
    int aantalSpelers;
    std::vector<Speler*> spelersVector;
};

#endif // SPEL_H
