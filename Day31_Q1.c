// Q61: Search for an element in an array using linear search.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 3
// Output 1:
// Found at index 2

// Input 2:
// 4
// 10 20 30 40
// 25
// Output 2:
// -1

// *
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter Number of Elements: "); // No. of elements defined by user
    scanf("%d", &a);
    int arr[a];

    printf("Enter Your Elements: "); // Take Input for elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // stores elements in array
    }

    printf("Enter the Element you want to Search: "); // Input the element to search
    scanf("%d", &b);

    for (int j = 0; j < a; j++) // loop for searching element inside array
    {
        if (arr[j] == b)
        {
            printf("Element Found at Index: %d", j);
            return 0;                    //If element is found Program ends here
        }
    }
    printf("-1"); // if the program reached here element was not found

    return 0;
}