#include <stdio.h> //standard input-output header file library

int main()
{

    //   oprator arithmetic + - * / %
    // + Addition
    // -Subtraction
    // * Multiplication
    // / Division
    // %Modulus
    // ++Increment
    // — Decrement

    int Num1 = 100, Num2 = 10;
    // Operand= num1 ,+=operator
    int sum = Num1 + Num2;
    // num1=num1+num2
    int sub = Num1 - Num2;
    int mul = Num1 * Num2;
    int div = Num1 / Num2;
    int mod = Num1 / Num2;
    printf("%d\n", Num2++);
    printf("%d\n", Num2);
    printf("%d\n", ++Num1);
    printf("%d\n", Num1);
    printf("%d\n", Num2++);

    return 0;
}
