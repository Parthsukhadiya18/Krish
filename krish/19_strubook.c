#include <stdio.h>
#include <string.h>
// defined struct
struct Book
{
    int Price;
    char Book_name[20];
};

int main()
{
    //    create obj
    struct Book b1 = {100, "Modi"};

    printf("%d %s\n", b1.Price, b1.Book_name);

    return 0;
}