#include <stdio.h>
int fact(int k)
{
    if (k == 1)
    {
        return 1;
    }
    int add = k * fact(k - 1);
}
int main()
{
    printf("fact(2)=%d\n", fact(2));
    printf("fact(5)=%d\n", fact(5));
    printf("fact(7)=%d\n", fact(7));
    printf("fact(10)=%d\n", fact(10));
    return 0;
}
