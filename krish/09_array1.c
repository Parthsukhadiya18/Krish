#include <stdio.h>
int main()
{
    // array used to store multiple value in single variable

    int num1[20];
    int num2[20];

    printf("enter value of num1[2]\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", num1[i]);
    }

    printf("enter value of num2[2]\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &num2[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", num2[i]);
    }

    printf("sum of num1[20] and num2[20]");
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n", num1[i] + num2[i]);
    }

    return 0;
}