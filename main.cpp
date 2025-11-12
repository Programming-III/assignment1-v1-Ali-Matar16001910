#include <iostream>
#include "Animal.h"
#include "Mammal.h"

using namespace std;
Animal::Animal(){
name = " ";
age = 0;
isHungry = false;
}
Animal::Animal(string n, int a, bool h){
name = n;
age = a;
isHungry = h;
}
Animal::~Animal(){
}
void Animal::display(){
string h;
if(isHungry)
h = ", Hungry)";
else
h = ", Not Hungry)";
    cout<<name<<"(Age: "<<age<<h<<endl;
}
void Animal::feed(){
    if(isHungry)
    isHungry = false;
    else
    cout<<"Animal isn´t hungry"<<endl;
}
string Animal::getName(){
    return name;
}
int Animal::getAge(){
    return age;
}
bool Animal::getIsHungry(){
    return isHungry;
}
void Animal::setName(string n){
    name = n;
}
void Animal::setAge(int a){
    age = a;
}
void Animal::setIsHungry(bool h){
    isHungry = h;
}

Mammal::Mammal(){
setName(" ");
setAge(0);
setIsHungry(false);
furColor = " ";
}
Mammal::Mammal(string n, int a, bool h, string f){
setName(n);
setAge(a);
setIsHungry(h);
furColor = f;
}
Mammal::~Mammal(){
}
string Mammal::getFurColor(){
    return furColor;
}
void Mammal::setFurColor(string f){
    furColor = f;
}

int main()
{

cout << "Hello world!" << endl;
Animal* A = new Animal("cat", 3, true);
A->display();

    return 0;
    }
