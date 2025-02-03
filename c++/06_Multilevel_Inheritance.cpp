#include <iostream>
using namespace std;
class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};


class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};


class Labrador : public Dog {
public:
    void color() {
        cout << "Labrador is golden in color" << endl;
    }
};


int main() {
    Labrador myLabrador;
     myLabrador.speak();
     myLabrador.bark(); 
     myLabrador.color(); 
    return 0;
}
