// Q76: Check if a matrix is symmetric.

// /*
// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 2 1
// Output 1:
// True

// Input 2:
// 2 2
// 1 0
// 2 1
// Output 2:
// False

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

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] != arr[j][i]) // If matrix is not symmetric
            {
                printf("False");
                return 0; // Program Stops Here
            }
        }
    }

    printf("True");

    return 0;
}