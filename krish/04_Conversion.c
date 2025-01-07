#include <stdio.h>

int main()
{
    // auto Conversion
    int num = 12.23;
    printf("%d\n", num);

    // manual Conversion

    int marks = 435;
    int total_Marks = 500;
    float avg = (float)marks*100 / total_Marks;
    printf(" avg=%f\n", avg);

    return 0;
}
