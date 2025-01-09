#include <stdio.h>
#include <string.h>
// function is block of code
// function defination
//  parameter
void hello(char name[10], char LastName[10])
{
    printf("hi %s.lastname %s \n", name, LastName);
}

int main()
{

    // functing calling
    // hello();
    hello("parth", "Patel");
    hello("Krish", "p");
}