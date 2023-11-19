#ifndef BURGER_H
#define BURGER_H
#include <string>


class Burger
{
public:
    Burger( std::string naam) : naam(naam) {}
    std::string getName(void);

private:
    void setName(std::string name);

protected:
    std::string naam;
};

#endif // BURGER_H
