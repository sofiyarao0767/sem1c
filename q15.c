//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>

void main() {
    
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if (a >= 'a' && a <= 'z') {
        printf("Lowercase alphabet\n");
    } else if (a >= '0' && a <= '9') {
        printf("Digit\n");
    } else{
        printf("Special character\n");
    }

}