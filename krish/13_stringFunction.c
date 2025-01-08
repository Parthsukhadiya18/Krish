#include <stdio.h>
#include <string.h>
int main()
{
    // string langth
    // char str[12] = "hello parth";
    // printf("%d\n", strlen(str));
    // printf("%d\n", sizeof(str));

    // strcat jot string
    // char str1[10] = "hello ";
    // char str2[10] = "Parth ";
    // strcat(str1, str2);
    // printf("%s\n", str1);
    // printf("%s\n", str2);

    // copy
    char str1[10] = "hello ";
    char str2[10] = " ";
    // strcpy(str2, str1);
    // printf("%s\n", str1);
    // printf("%s\n", str2);

    //   compare
    // printf("%d", strcmp(str1, str2));

    // upper case
    char str3[10] = "krish";
    printf("%s\n", strupr(str3));

    // lower case
    char str4[10] = "KRISH";
    printf("%s\n", strlwr(str4));

    // reverse
    char str5[10] = "Parth";
    printf("%s\n", strrev(str5));
    return 0;
}