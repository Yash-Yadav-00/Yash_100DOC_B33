// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// *

#include <stdio.h>
int main()
{

    for (int i = 0; i <= 9; i++)    //loop for upper triangle
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    for (int i = 7; i >= 0; i--)      //loop for lower triangle
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
