// Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main()
{

    for (int i = 1; i <= 18; i++)     // loop for rows
    { 

        if (i == 2 || i == 6 || i == 12 || i == 16 || i == 18)  // condition for printing spaces
        { 
            printf(" ");
        }
        else
        {
            printf("*"); // for printing stars
        }

        printf("\n"); // move to the next line
    }

    return 0;
}
