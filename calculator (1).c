/*Assignment -1*/
/*Date-26.9.2024*/

#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
void sub(int x, int y) {
    printf("Result: %d\n", x - y);
}
int multi() {
    int x, y;
    printf("Enter two numbers for multiplication: \n");
    scanf("%d %d", &x, &y);
    return x* y;
}

void div() {
    int x, y;
    printf("Enter two numbers for division: \n");
    scanf("%d %d", &x, &y);
    if (y != 0)
        printf("Result: %.2f\n", (float)x/ y);
    else
        printf("Error: Division by zero is not allowed.\n");
}

int main() {
    int ch, x, y;
        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &ch);
        
        switch (ch) {
            case 1:
                printf("Enter two numbers for addition:\n ");
                scanf("%d %d", &x, &y);
                printf("Result: %d\n", add(x, y));
                break;
            case 2:
                printf("Enter two numbers for subtraction:\ ");
                scanf("%d %d", &x, &y);
                sub(x, y);
                break;
            case 3:
                printf("Result: %d\n", multi());
                break;
            case 4:
                div();
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
}
