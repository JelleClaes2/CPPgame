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
    void setNaam(std::string naam);
    virtual enum ROLLEN getRol(void) =0;
    void setBurgemeester(bool burgemeester);
    bool getBurgemeester(void);
    void setVerliefd(bool isVerliefd);
    bool getVerliefd(void);
    void setIsVermoord(bool isVermoord);
    bool getIsVermoord(void);
private:

protected:
    std::string naam;
    bool burgermeester;
    bool isVerliefd;
    bool isVermoord;
};

#endif // SPELER_H
