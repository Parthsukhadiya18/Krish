#include <iostream>
using namespace std;
class Emp
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};
int main()
{

    Emp E1;
    E1.setSalary(50000);
    cout << E1.getSalary();
    return 0;
}