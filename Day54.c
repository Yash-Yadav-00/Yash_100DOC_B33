// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

// /*
// Sample Test Cases:
// Input 1:
// n = 8
// Output 1:
// 6

// Input 2:
// n = 1
// Output 2:
// 1

// Input 3:
// n = 4
// Output 3:
// -1

// */
#include <stdio.h>
int main()
{
    int n; // Declare Variables
    int sum1 = 0, sum2 = 0;
    int a = -1;                    // Default Value if Pivot Not Found
    printf("Enter Your Number: "); // Take Input From User
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum1 = 0; // Reset sum every time after moving one place to right
        sum2 = 0;

        for (int j = 1; j <= i; j++)
        {
            sum1 += j;
        }
        for (int k = i; k <= n; k++)
        {
            sum2 += k;
        }
        if (sum1 == sum2)
        {
            a = i; // pivot integer found

            break;
        }
    }
    printf("%d", a); // Display Output
    return 0;
}