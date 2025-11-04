// Q68: Delete an element from an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 2
// Output 1:
// 1 2 4 5

// */
#include <stdio.h>
int main()
{

    int a, b;
    int arr[10];

    printf("Enter the number of elements: "); // no. of elements
    scanf("%d", &a);

    printf("Enter your Elements: "); // take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // stores every elements in array
    }
    printf("Enter the Element You want to delete: "); // Input the element to be Deleted
    scanf("%d", &b);

    for (int k = 0; k < a; k++) // loop goes until k is less than a
    {
        {
            if (arr[k] == b) // if the number is equal to the element in array
            {
                for (int i = arr[k]; i < a; i++) // shift all the element to the left after the elment to be removed
                {
                    arr[i] = arr[i + 1];
                }
            }
        }
    }
    a--;                        // Reduce array size by 1
    for (int j = 0; j < a; j++) // prints the stored elements
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
