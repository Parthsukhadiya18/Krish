#include <iostream>
using namespace std;
// class defined
class Book
{
    // access
public:
    int id;
    string name;
};
int main()
{

    // create obj
    Book b1;
    b1.id = 10;
    b1.name = "parth";

    cout << "id=" << b1.id << endl
         << "name=" << b1.name << endl;

    Book b2;
    b2.id = 11;
    b2.name = "Krish";

    cout << "id=" << b2.id << endl
         << "name=" << b2.name << endl;
    Book b3;
    b3.id = 12;
    b3.name = "arth";

    cout << "id=" << b3.id << endl
         << "name=" << b3.name << endl;
    Book b4;
    b4.id = 13;
    b4.name = "Ayush";

    cout << "id=" << b4.id << endl
         << "name=" << b4.name << endl;
    Book b5;
    b5.id = 14;
    b5.name = "sparsh";

    cout << "id=" << b5.id << endl
         << "name=" << b5.name << endl;
    return 0;
}