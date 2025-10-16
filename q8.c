//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
void main()
{
    int a, sum;
    sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; ++i) {
        sum += i;
    }
    printf("Sum = %d", sum);
}