#include <stdio.h>
int main()
{
    // int myAge = 43;
    // int *ptr = &myAge;

    // printf("%d\n", &myAge);

    // printf("%p\n", ptr);
    // printf("%lu\n", ptr);

    // printf("%d\n", *ptr);

    // Pointers & Arrays
    int myNumbers[4] = {5, 10, 15, 20};

    int *ptr = myNumbers;

    for (int i = 0; i < 4; i++)
    {

        printf("%d ", *(ptr + i));
    }
}