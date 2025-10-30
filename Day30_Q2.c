// Q60: Count positive, negative, and zero elements in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// -1 0 1 2 -2
// Output 1:
// Positive=2, Negative=2, Zero=1

// *
#include <stdio.h>
int main()
{

    int a, pos = 0, neg = 0, zero = 0; // counters for positive, negative numbers and zero
    int arr[10];

    printf("Enter Number of Elements: "); // Take input from user
    scanf("%d", &a);

    printf("Enter Your Elements: "); // store values in array
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < a; j++) // check for positive , negitive and zero's
    {
        if (arr[j] > 0)
        {
            pos++;
        }
        else if (arr[j] < 0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive = %d, Negative = %d, Zero = %d", pos, neg, zero); // Displays Output

    return 0;
}