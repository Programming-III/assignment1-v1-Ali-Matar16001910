#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal
{
    public:
    Animal();
    Animal(string name, int age, bool isHungry);
    virtual ~Animal();
    void display();
    void feed();
    string getName();
    int getAge();
    bool getIsHungry();
    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool h);

    protected:

    private:
    string name;
    int age;
    bool isHungry;
};

#endif // ANIMAL_H
