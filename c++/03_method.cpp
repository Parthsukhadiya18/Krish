#include <iostream>
using namespace std;
// class defined
class Book
{
    // access
public:
    int id;
    string name;

    void book_info()
    {
        cout << "this is book info!";
    }
};
int main()
{

    // create obj
    Book b1;
    b1.id = 10;
    b1.name = "parth";


    cout << "\nid=" << b1.id << endl
         << "name=" << b1.name << endl;
    b1.book_info();
    return 0;
}