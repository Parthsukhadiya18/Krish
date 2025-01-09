#include <stdio.h>
int sum(int k)
{
    if (k == 1)
    {
        return 1;
    }
    int add = k + sum(k - 1);
}
int main()
{
    printf("sum(2)=%d\n", sum(2));
    printf("sum(10)=%d\n", sum(10));
    printf("sum(20)=%d\n", sum(20));
    printf("sum(100)=%d\n", sum(100));
    return 0;
}
