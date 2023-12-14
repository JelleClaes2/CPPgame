#ifndef ZIENER_H
#define ZIENER_H
#include "burger.h"


class Ziener : public Burger
{
public:
    Ziener(std::string naam):Burger(naam){}
    void actieNacht();
    enum ROLLEN getRol();
};

#endif // ZIENER_H
