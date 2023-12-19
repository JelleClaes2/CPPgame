#ifndef SPEL_H
#define SPEL_H

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
    void vulNamenIn(void);
    void eersteNacht(void);
    void nacht(void);
    void toonRollen(void);
    void stemVoorBurgemeester(void);
    bool checkEindeSpel(void);
    void dag(void);
private:
    int aantalSpelers;
    std::vector<Speler*> spelersVector;
    void verwijderSpeler(void);
    std::string displayRol(ROLLEN rol);
    void vermoorden(void);
    void stemVoorVerbaning(void);
    Speler* vindSpeler(ROLLEN rol);
};

#endif // SPEL_H
