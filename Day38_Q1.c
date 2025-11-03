// Q75: Add two matrices.

// /*
// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 3 4
// 2 2
// 5 6
// 7 8
// Output 1:
// 6 8
// 10 12

// */
#include <stdio.h>
int main()
{
    int a, b, c, d; // a = no. of rows of first matrix , b = no. of rows of first matrix
    // c = no. of rows of second matrix , d = no. of rows of second matrix

    // Input for first matrix
    printf("Enter No. of rows of First Matrix: ");
    scanf("%d", &a);
    printf("Enter No. of columns of First Matrix: ");
    scanf("%d", &b);

    int arr[a][b];
    printf("Enter elements of First Matrix:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);

    // Input for second matrix
    printf("Enter No. of rows of Second Matrix: ");
    scanf("%d", &c);
    printf("Enter No. of columns of Second Matrix: ");
    scanf("%d", &d);

    int arr1[c][d];
    printf("Enter elements of Second Matrix:\n");
    for (int i = 0; i < c; i++)
        for (int j = 0; j < d; j++)
            scanf("%d", &arr1[i][j]);

    // Check if addition is possible
    if (a != c || b != d)
    {
        printf("Matrix addition not possible!\n");
        return 0;
    }

    // Result matrix
    int sum[a][b];
    printf("Sum :\n");
    // Add corresponding elements
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum[i][j] = arr[i][j] + arr1[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
