// Q67: Insert an element in an array at a given position.

// /*
// Sample Test Cases:
// Input 1:
// 4
// 10 20 30 40
// 2 15
// Output 1:
// 10 20 15 30 40

// */
#include <stdio.h>
int main()
{

    int a, b, n, pos, j;

    printf("Enter No. of Elements: "); // Ask Number of elements
    scanf("%d", &a);
    int arr[a + 1]; // Increase Size of array by 1

    printf("Enter Elements: "); // Take Input Of Elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Position and the Element: "); // Input Position and Elements
    scanf("%d%d", &pos, &n);

    for (j = a; j >= pos; j--) // start the loop from the last position until we reach position
    {
        arr[j] = arr[j - 1]; // shift all the elements to right after position
    }

    arr[pos - 1] = n; // assign thevalue given by user at the given position

    for (int l = 0; l < a + 1; l++) // Print Array with the increased element
    {
        printf("%d ", arr[l]);
    }

    return 0;
}
