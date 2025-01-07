// Comparison operators
#include <stdio.h> //standard input-output header file library

int main()
{

//    >Greater than 
// <Less than   
// >=Greater than or equal to
// <=Less than or equal to
// ==Equal to 
// !=Not equal


int Num1 = 5, Num2 = 10;
int check= Num1 <Num2    ;
printf("Num1 <Num2 =%d\n",Num1 <Num2 );

Num1 = 10, Num2 = 10;
check= Num1 <=Num2 ;
printf("Num1 <=Num2 =%d\n",Num1 <=Num2 );


Num1 = 15, Num2 = 10;
check= Num1 >Num2  ;

printf("Num1 >Num2 =%d\n",Num1>Num2 );


Num1 = 15, Num2 = 10;
check= Num1 >=Num2  ;
printf("Num1 >=Num2 =%d\n",Num1>=Num2 );


Num1 = 15, Num2 = 10;
check= Num1 ==Num2 ;
printf("Num1 ==Num2 =%d\n",check );

Num1 = 15, Num2 = 10;
check = Num1 !=Num2  ;
printf("Num1 !=Num2 =%d\n",check );


    return 0;
}
