#include<iostream>
using namespace std;
class Animal
{
    string sound;
    public :
    string Sound() {return sound;}     // why have to rename 'S'ound??
    void setSound(string sound)
    {
        this->sound = sound;
    }
};
class Dog : public Animal
{
    string dogSound;
    public :
    string Sound() {return dogSound;}
    void setSound(string sound)
    {
        dogSound = sound;
    }
};
int main()
{
    Animal Cat;
    Cat.setSound("meyow");
    cout<<Cat.Sound()<<endl;

    Dog pet;
    pet.setSound("bow");
    cout<<pet.Sound()<<endl;
}