#include <iostream>
using namespace std;
class Animal {  // Base class
public:
    void eat() {
        cout << "Animal is eating\n";
    }
};
class Dog : public Animal {// Derived class inheriting from Animal
public:
    void bark() {
        cout << "Dog is barking\n";
    }
};
int main() {
    Dog myDog;
    myDog.eat();  // Accessing base class method
    myDog.bark();  // Accessing derived class method
    return 0;}
