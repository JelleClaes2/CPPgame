#include "spel.h"

int main(int argc, char *argv[])
{
    int aantalSpelers = 8;

    Spel* nieuwSpel = new Spel(aantalSpelers);
    nieuwSpel->VoegSpelersToe(aantalSpelers);
    nieuwSpel->nacht();
    return 0;
}
