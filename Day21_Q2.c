// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main()
{
    int n, i, sum = 0; // n = input number, i = loop variable, sum = to store sum of divisors

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++)
    { // i is 1 because 1 is the greatest divisor
        if (n % i == 0)
        {
            sum = sum + i; // add divisor to sum
        }
    }

    // Check if the number is perfect
    if (sum == n)
        printf(" Perfect Number.\n");
    else
        printf("Not perfect number");

    return 0;
}
