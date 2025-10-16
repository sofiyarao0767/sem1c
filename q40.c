//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
void main() {
    int binary, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {
        int digit = binary % 10;
        int flipped_digit = (digit == 0) ? 1 : 0; 
        complement += flipped_digit * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's complement is: %d\n", complement);
}