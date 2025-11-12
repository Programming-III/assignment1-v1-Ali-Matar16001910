#ifndef MAMMAL_H
#define MAMMAL_H

#include <Animal.h>


class Mammal : public Animal
{
    public:
    Mammal();
    Mammal(string n, int a, bool h, string f);
    virtual ~Mammal();
    string getFurColor();
    void setFurColor(string f);
    protected:

    private:
    string furColor;
};

#endif // MAMMAL_H
