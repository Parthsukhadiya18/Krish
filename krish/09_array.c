#include <stdio.h>
int main()
{
    // array used to store multiple value in single variable
    // array declate
    // int num[2];
    // int num[2] = {1, 2};
    // printf("%d\n", num[0]);
    // printf("%d\n", num[1]);
    // printf("%d\n", num[2]);

    int num1[20];

    printf("enter value of num1[2]\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", num1[i]);
    }

    return 0;
}