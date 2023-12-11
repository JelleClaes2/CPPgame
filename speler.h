#ifndef SPELER_H
#define SPELER_H
#include <string>


class Speler
{
public:
    Speler( std::string naam) : naam(naam) {}
    std::string getNaam(void);
    virtual void actieNacht(void)  =0;
    void setNaam(std::string naam);
    virtual std::string getRol(void) =0;
    void setBurgemeester(bool burgemeester);
    bool getBurgemeester(void);
private:

protected:
    std::string naam;
    bool burgermeester;
};

#endif // SPELER_H
