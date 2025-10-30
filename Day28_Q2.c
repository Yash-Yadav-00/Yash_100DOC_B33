// Q56: Read and print elements of a one-dimensional array.

// /*
// Sample Test Cases:
// Input 1:
// 3
// 10 20 30
// Output 1:
// 10 20 30

// Input 2:
// 5
// 1 2 3 4 5
// Output 2:
// 1 2 3 4 5

// *
#include <stdio.h>
int main()
{

    int a;
    int arr[10];

    printf("Enter the number of elements: ");  //no. of elements
    scanf("%d", &a);

    printf("Enter your Elements: ");  //take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);         //stores every elements in array
    }

    for (int j = 0; j < a; j++)   //prints the stored elements
    {
        printf("%d ", arr[j]);
    }
    return 0;
}