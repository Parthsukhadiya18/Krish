#include <stdio.h>
int main()
{

    char str[] = "Hello Parth";
    printf("%s\n", str);

    // for (int i = 0; i < 11; i++)
    // {
    //     printf("%c", str[i]);
    // }

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}