// Q62: Reverse an array without taking extra space.

// /*
// Sample Test Cases:
// Input 1:
// 4
// 1 2 3 4
// Output 1:
// 4 3 2 1

// */
#include <stdio.h>
int main()
{

    int a;
    

    printf("Enter the number of elements: "); // no. of elements
    scanf("%d", &a);
    int arr[a];

    printf("Enter your Elements: "); // take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // stores every elements in array
    }

    for (int j = a -1; j >= 0; j--) // prints the elements in reverse order
    {
        printf("%d ", arr[j]);
    }
    return 0;
}