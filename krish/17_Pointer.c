#include <stdio.h>
int main()
{
    int myAge = 43;
    int *ptr = &myAge;

    printf("%d\n", &myAge);

    printf("%p\n", ptr);
    printf("%lu\n", ptr);

    printf("%d\n", *ptr);
}