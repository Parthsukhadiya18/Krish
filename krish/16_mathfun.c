#include <stdio.h>
#include <math.h>

int main()
{
    // sqrt()   2*2=4

    printf("sqrt(4)=%f\n", sqrt(4));
    printf("sqrt(16)=%f\n", sqrt(16));

    // cbrt 2*2*2=8
    printf("cbrt(8)=%f\n", cbrt(8));
    printf("cbrt(64)=%f\n", cbrt(64));

    // ceil()  1.1 to 1.9 =2
    printf("ceil(1.1)=%f\n", ceil(1.1));
    printf("ceil(1.9)=%f\n", ceil(1.9));

    // floor()  1.1 to 1.9 =1
    printf("floor(1.2)=%f\n", floor(1.2));
    printf("floor(1.8)=%f\n", floor(1.8));

    // pow(2,4)
    printf("pow(2,4)=%f\n", pow(2, 4));
    printf("pow(4,3)=%f\n", pow(4, 3));

    // abs(x)

    printf("abs(-4)=%d\n", abs(-4));
    printf("abs(4)=%d\n", abs(4));
   
   
    return 0;
}
