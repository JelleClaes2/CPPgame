#ifndef SPEL_H
#define SPEL_H

#define MINSPELERS 8
#define MAXSPELERS 18

#include "speler.h"
#include "burger.h"
#include "heks.h"
#include "weerwolf.h"
#include "rollen.h"

#include <vector>


class Spel
{
public:
    Spel(int aantalSpelers);
    void voegSpelersToe(int aantalSpelers);
    void vulNamenIn();
    void nacht();
    void toonRollen();
    void stemVoorBurgemeester(void);
    void stemVoorVerbaning(void);
    std::vector<Speler*> getSpelersVector(void);
    Speler* vindSpeler(enum rollen rol);

private:
    int aantalSpelers;
    std::vector<Speler*> spelersVector;
    int aantalNachten;
};

#endif // SPEL_H
