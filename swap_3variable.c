//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter first number: ");                            // Input two numbers
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);    // Display before swapping

    c = a;                                                 // Swap using third variable
    a = b;
    b = c;

    printf("After swapping: a = %d, b = %d\n", a, b);     // Display after swapping

    return 0;
}
