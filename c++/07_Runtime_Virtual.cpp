#include <iostream>
using namespace std;

class Animal
{
public:
    void virtual animalSound()
    {
        cout << "animal sound!\n";
    }
};

class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "pig sound!\n";
    }
};
int main()
{
    Animal *a1;
    Pig myPig;

    a1 = &myPig;
    a1->animalSound();
    myPig.animalSound();
    return 0;
}
