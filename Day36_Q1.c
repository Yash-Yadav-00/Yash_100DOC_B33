// Q71: Read and print a matrix.

// /*
// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 3 4
// Output 1:
// 1 2
// 3 4

// */

#include <stdio.h>
int main()
{

    int a, b; // a = No. of  rows , b = No. of columns of the matrix

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
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // Move on to next line after printing 1 row
    }

    return 0;
}