// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main()
{

    int a, n; // Declare Variables
    float sum = 1, num = 3, den = 4;
    printf("Enter Your Number: "); // Take Input From User
    scanf("%d", &a);

    for (n = 1; n < a; n++) // Calculate Sum of Series
    {

        sum = sum + num / den;
        num = num + 2;
        den = den + 2;
    }

    printf("Approximate value= %.1f", sum); // Display Output

    return 0;
}
