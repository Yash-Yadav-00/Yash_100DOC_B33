// Q69: Find the second largest element in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 10 20 30 40 50
// Output 1:
// 40

// */
#include <stdio.h>

int main()
{
    int a;
    int largest, second;

    printf("Enter the number of elements: "); // Ask no. of elements from User
    scanf("%d", &a);

    int arr[a];

    printf("Enter your Elements: "); // take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]); // stores every elements in array
    }

    largest = arr[0]; // Start by assuming first number is the largest and also The Second Largest
    second = arr[0];

    for (int i = 1; i < a; i++)
    { // Find the largest number{
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    second = arr[0]; // Find the second largest number
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    printf("The second largest number is: %d", second); // Displays Outpuy

    return 0;
}
