// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main()
{
    int a, n, gcd;

    printf("Enter 2 Numbers: ");
    scanf("%d %d", &a, &n);

    // Loop from 1 to the smaller number
    for (int i = 1; i <= a && i <= n; i++)
    {
        if (a % i == 0 && n % i == 0)
        {            // if 'i' divides both numbers
            gcd = i; // store current i as gcd
        }
    }

    printf("HCF (GCD) = %d", gcd);

    return 0;
}
