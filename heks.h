#ifndef HEKS_H
#define HEKS_H
#include "burger.h"


class Heks : public Burger
{
public:
    Heks(std::string naam):Burger(naam){}
    Heks():Burger("Heks"){}
    void actieNacht(std::vector <Speler*> spelersVector);
    enum ROLLEN getRol();

    ~Heks(){}

private:

    void setTotLevenGebracht(bool totLevenGebracht);
    bool getTotLevenGebracht(void);

    void setVergiftigd(bool vergiftigd);
    bool getVergiftigd(void);

protected:
    bool totLevenGebracht;
    bool vergiftigd;
};

#endif // HEKS_H
