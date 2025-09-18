//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>
int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

                                      // Swap without using third variable (arithmetic method)
    a = a + b;   // sum stored in a
    b = a - b;  // original a now in b
    a = a - b;  // original b now in a

    // Output result
    printf("After swap: %d %d\n", a, b);

    return 0;
}
