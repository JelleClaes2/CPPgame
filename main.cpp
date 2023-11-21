#include "spel.h"

int main(int argc, char *argv[])
{
    int aantalSpelers = 8;

    Spel* niewSpel = new Spel(aantalSpelers);
    niewSpel->VoegSpelersToe(aantalSpelers);

    return 0;
}
