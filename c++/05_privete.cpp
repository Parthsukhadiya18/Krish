#include <iostream>
using namespace std;
class Book
{
private:
    string name;
};
int main()
{

    Book b1;
    b1.name = "parth";
    cout << b1.name;
    return 0;
}