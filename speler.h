#ifndef SPELER_H
#define SPELER_H
#include <string>


class Speler
{
public:
    Speler( std::string naam) : naam(naam) {}
    std::string getNaam(void);
    virtual void actieNacht(void) =0;

private:
    void setNaam(std::string name);

protected:
    std::string naam;
};

#endif // SPELER_H
