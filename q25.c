//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

void main() {
    int a,b,c;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            c = a + b;
            printf("%d\n", c);
            break;
        case '-':
            c = a - b;
            printf("%d\n", c);
            break;
        case '*':
            c = a * b;
            printf("%d\n", c);
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                printf("%d\n", c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (b != 0) {
                c = a % b;
                printf("%d\n", c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
}
