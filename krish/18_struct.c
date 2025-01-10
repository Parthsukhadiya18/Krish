#include <stdio.h>
#include <string.h>
// defined struct
struct Emp
{
    int id;
    char name[20];
};

int main()
{
    //    create obj
    struct Emp e1;
    e1.id = 10;
    printf("%d\n", e1.id);
    // e1.name = "parth";
    // printf("%d\n", e1.name);

    strcpy(e1.name, "Parth");
    printf("%s\n", e1.name);

    struct Emp e2;
    e2.id = 11;
    strcpy(e2.name, "Krish");
    printf("%d %s\n", e2.id, e2.name);
    return 0;
}