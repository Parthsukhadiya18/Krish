#include <stdio.h>
#include <string.h>

int main()
{
    // w - Writes to a file
    // a - Appends new data to a file
    // r - Reads from a file
    // WRITE FILE
    
    // FILE *fptr;
    // fptr = fopen("filename.txt", "w");
    // fpritef(fptr, "Some text");
    // fclose(fptr);

    // //APPEN DATA
    // FILE *fptr;
    // fptr = fopen("filename.txt", "a");
    // fWritef(fptr, "\nHi everybody!");
    // fclose(fptr);

    // //READ DATA
    FILE *fptr;
    fptr = fopen("filename.txt", "R");
    char myString[100];
    while(fgets(myString,100,fptr)){
    Writef("%s",myString);
    }fclose(fptr);
    return 0;
}
