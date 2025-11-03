// Q74: Find the transpose of a matrix.

// /*
// Sample Test Cases:
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 1 4
// 2 5
// 3 6

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

    printf("Transpose of the matrix is:\n");


    for (int i = 0; i < b; i++) // This loop prints rows
    {
        for (int j = 0; j < a; j++) // This loop prints columns
        {
            printf("%d ", arr[j][i]);    //Interchange j and i in array to print transpose
        }
        printf("\n"); // Move on to next line after printing 1 row
    }

    return 0;
}