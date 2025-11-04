// Q78: Find the sum of main diagonal elements for a square matrix.

// /*
// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 15

// */
#include <stdio.h>
int main()
{

    int a, b, sum = 0;             // a = No. of  rows , b = No. of columns of the matrix
                                   // sum = sum of diagmol elements
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

    for (int i = 0; i < a; i++) // Check if diagonal elements are distinct
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j) // if we are on diagnol add that number to sum
            {
                sum = sum + arr[i][j];
            }
        }
    }

    printf("Sum  = %d", sum); // Display Output

    return 0;
}