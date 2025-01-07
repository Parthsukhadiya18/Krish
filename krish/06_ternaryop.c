#include <stdio.h> //standard input-output header file library

int main()
{

    int digit = 10;
    // if (digit > 0)
    // {
    //     printf("digit  is more 0=%d\n", digit);
    // }else
    // {
    //     printf("digit is less than 0=%d\n", digit);
    // }

    // ()?true:false

    (digit > 0) ? printf("digit is more than 0=%d\n", digit) : printf("digit is less than 0=%d\n", digit);
    int num = 1;
    (num > 0) ? printf("positive=%d\n", num) : printf("nagative=%d\n", num);

    return 0;
}
