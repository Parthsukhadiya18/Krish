// Logical operators
// && Logical and || Logical or  !Logical not
#include <stdio.h> //standard input-output header file library

int main()
{

    // && Logical 

int w = 4 ,x = 5, y = 10;
int check = w<x && w<y; 
printf("w<x && y>w= %d\n",check);

check= w>x && y<x;
printf("w>x && y<x= %d\n",check);

check= w<x && y>x ;
printf("w>x && y<x= %d\n",check);

check= w>x && w>x ;
printf("w>x && y<w= %d\n",check);


// || Logical or 
 check = w<x || y<x; 
printf("w<x || y<x= %d\n",check);

 check = w<x ||  w<y;
printf("w<x || y<x= %d\n",check);

check= w>x ||  y<x;
printf("w>x ||  y<x= %d\n",check);


check= w>x ||  y>x ;
printf("w>x ||  y>x = %d\n",check);



// !Logical not 1 !=0
check = !(w<x && y<x);

printf("!(w<x && y<x) = %d\n",check);
  return 0;
}
