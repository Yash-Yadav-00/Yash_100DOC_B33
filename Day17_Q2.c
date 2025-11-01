// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main()
{

    int a, n; // a = num provided by user , n = temp variable to store a

    printf("Enter a Number: "); // Take input from user
    scanf("%d", &a);

    n = a; // Store value of a

    for (int i = 2; i < a; i++) // Loop start from 2 because 2 is smallest divisor
    {
        if (n % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

    return 0;
}
