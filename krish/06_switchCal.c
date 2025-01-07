#include <stdio.h>

int main() {
    int choice;

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

