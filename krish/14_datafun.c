#include <stdio.h>
#include <string.h>
// function is block of code
// function defination
// datatype and parameter
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    // calling argument
    int add = sum(10, 25);
    printf("add %d\n", add);
    printf(" sum(10, 25) %d\n", sum(10, 25));
}