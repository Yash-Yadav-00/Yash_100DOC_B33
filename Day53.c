// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

// /*
// Sample Test Cases:
// Input 1:
// nums = [1,7,3,6,5,6]
// Output 1:
// 3

// Input 2:
// nums = [1,2,3]
// Output 2:
// -1

// Input 3:
// nums = [2,1,-1]
// Output 3:
// 0

// */
#include <stdio.h>
int main()
{

    int a, pivot = -1;
    int sum1 = 0, sum2 = 0; // default value: assumes no ceil found

    printf("Enter Number Of Elements: \n");
    scanf("%d", &a);

    int arr[a]; // array of size 'a'

    printf("Enter %d Elements: \n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // reading each element
    }

    for (int i = 0; i < a; i++)
    {
        sum1 = 0; // reset sum every time after moving one place
        sum2 = 0;
        for (int j = 0; j < i; j++)
        {
            sum1 = arr[j] + sum1; // sum of left side
        }
        for (int k = i + 1; k < a; k++)
        {
            sum2 = sum2 + arr[k]; // sum of right side
        }

        if (sum1 == sum2)
        {
            pivot = i; // Pivot found

            break;
        }
    }
    printf("%d", pivot); // Display OUtput
    return 0;
}