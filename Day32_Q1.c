// Q63: Merge two arrays.

// /*
// Sample Test Cases:
// Input 1:
// 3
// 1 2 3
// 2
// 4 5
// Output 1:
// 1 2 3 4 5

// */
#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter the number of elements of First Array: "); // no. of elements
    scanf("%d", &a);
    int arr1[a];

    printf("Enter your Elements: "); // take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]); // stores every elements in array
    }
    printf("Enter the number of elements of Second Array: "); // no. of elements
    scanf("%d", &b);
    int arr2[b];

    printf("Enter your Elements: "); // take input of elements
    for (int j = 0; j < b; j++)
    {
        scanf("%d", &arr2[j]); // stores every elements in array
    }
    int n = a + b; // Define new array with index as big as pevious ones
    int arr3[n];

    for (int j = 0; j < a; j++) // Store the element of First array in the new one
    {
        arr3[j] = arr1[j];
    }
    for (int k = 0; k < b; k++) // store the element of second array after first one
    {
        arr3[a + k] = arr2[k];
    }
    printf("Merged Array: "); // Display Output
    for (int o = 0; o < n; o++)
    {
        printf("%d ", arr3[o]);
    }

    return 0;
}