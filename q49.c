/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/

#include <stdio.h>
void main() {
    int rows = 5;

    for (int i = rows; i >= 1; i--) {
        for (int j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}