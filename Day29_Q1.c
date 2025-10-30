// Q57: Find the sum of array elements.

// /*
// Sample Test Cases:
// Input 1:
// 4
// 2 4 6 8
// Output 1:
// 20

// Input 2:
// 3
// 1 1 1
// Output 2:
// 3

// *
#include <stdio.h>
int main()
{

    int a, sum = 0;
    int arr[10];

    printf("Enter Number of Elements: ");    //No. of elements defined by user
    scanf("%d", &a);

    printf("Enter Your Elements: ");    //Take Input for elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);    //stores elements in array
    }

    for (int j = 0; j < a; j++)         // loop for addition of elements in array
    {
        sum = sum + arr[j];
    }
    printf("%d", sum);

    return 0;
}