#ifndef SPELER_H
#define SPELER_H
#include <string>
#include <vector>

#include "rollen.h"


class Speler
{
public:
    Speler( std::string naam) : naam(naam) {}
    std::string getNaam(void);
    virtual void actieNacht(std::vector <Speler*> spelersVector)  =0;
    void setNaam(const std::string naam);
    virtual enum ROLLEN getRol(void) =0;
    void setBurgemeester(const bool burgemeester = 0);
    bool getBurgemeester(void);
    void setVerliefd(const bool isVerliefd = 0);
    bool getVerliefd(void);
    void setIsVermoord(const bool isVermoord = 0);
    bool getIsVermoord(void);
private:

protected:
    std::string naam;
    bool burgermeester;
    bool isVerliefd;
    bool isVermoord;
};

#endif // SPELER_H
