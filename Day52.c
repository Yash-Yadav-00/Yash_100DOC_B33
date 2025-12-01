// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

// /*
// Sample Test Cases:
// Input 1:
// arr = [1, 2, 8, 10, 11, 12, 19], x = 5
// Output 1:
// 2

// Input 2:
// arr = [1, 2, 8, 10, 11, 12, 19], x = 20
// Output 2:
// -1

// Input 3:
// arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
// Output 3:
// 0

// Input 4:
// arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
// Output 4:
// 2

// */
#include <stdio.h>

int main()
{
    int a, x;
    int ceil = -1; // default value: assumes no ceil found

    printf("Enter Number Of Elements: \n");
    scanf("%d", &a);

    int arr[a]; // array of size 'a'

    printf("Enter %d Elements: \n", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // reading each element
    }

    printf("Enter A Number: \n");
    scanf("%d", &x); // the number whose ceil we want

    for (int j = 0; j < a; j++)
    {
        if (arr[j] >= x) //  the element greater than x
        {
            ceil = j; // store its index
            break;
        }
    }

    // Print the index of the ceil (or -1 if not found)
    printf("%d\n", ceil);

    return 0;
}
