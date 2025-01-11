#include <iostream>
using namespace std;
// class defined
class Info
{
    // access
public:
    // Constructors function automatic call
    Info()
    {
        cout << "welcome to home page!\n";
    }
    //    destructors function aposite of Constructors fun
    ~Info()
    {
        cout << "welcome to again home page!\n";
    }
};
int main()
{

    // create obj
    Info I1;

    return 0;
}