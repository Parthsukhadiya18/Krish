#include <stdio.h> //standard input-output header file library

int main()
{

    // int digit = 10;
    // if (digit > 0)
    // {
    //     printf("digit  is more 0=%d\n", digit);
    // }
    // else if (digit < 0)
    // {
    //     printf("digit  is less than 0=%d\n", digit);
    // }

    // else
    // {
    //     printf("digit is 0=%d\n", digit);
    // }
    // int day = 0;
    // switch (day)
    // {
    // case 1:
    //     printf("welcome to Trueline!");
    //     break;

    // default:
    //     printf("most welcome to Trueline!");
    //     break;
    // }

    int day = 3;
    printf("enter day 0-6 sunday to saturday");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Invalid day\n");
        break;
    }

    return 0;
}
