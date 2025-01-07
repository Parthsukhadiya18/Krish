#include <stdio.h> //standard input-output header file library

int main()
{

    int digit = 10;
    if (digit > 0)
    {
        printf("digit  is more 0=%d\n", digit);
    }
    else if (digit < 0)
    {
        printf("digit  is less than 0=%d\n", digit);
    }

    else
    {
        printf("digit is 0=%d\n", digit);
    }

    return 0;
}
