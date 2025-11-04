// Q77: Check if the elements on the diagonal of a matrix are distinct.

// /*
// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 1
// Output 1:
// False

// Input 2:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 2:
// True

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

    for (int i = 0; i < a; i++)// Check if diagonal elements are distinct
    {
        for (int j = 0; j < b; j++)// Compare every diagonal element arr[i][i] with others arr[j][j]
        {
            if (i != j && arr[i][i] == arr[j][j])
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");

    return 0;
}