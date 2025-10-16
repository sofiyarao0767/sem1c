//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include <stdio.h>

void main() {
    int num;
    int binary[32]; 
    int index = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary representation is 0\n");
        return;
    }

    while(num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    printf("Binary representation is ");
    for(int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}