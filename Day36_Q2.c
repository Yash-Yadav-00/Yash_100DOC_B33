// Q72: Find the sum of all elements in a matrix.

// /*
// Sample Test Cases:
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 21

// */

#include <stdio.h>
int main()
{

    int a, b, sum = 0;             // a = No. of  rows , b = No. of columns of the matrix
                                   // sum = sum of elements
    printf("Enter No. of rows: "); // Ask the user for Rows and Columns
    scanf("%d", &a);
    printf("Enter No. of columns: ");
    scanf("%d", &b);

    int arr[a][b]; // Define Matrix from the input taken from user

    printf("Enter your Elements: "); // Take input for elements of the matrix
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < a; i++) // This loop prints rows
    {
        for (int j = 0; j < b; j++) // This loop prints columns
        {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}