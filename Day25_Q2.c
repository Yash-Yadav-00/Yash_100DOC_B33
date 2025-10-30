// Q50: Write a program to print the following pattern:
//*****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main()
{

    for (int i = 0; i < 5; i++) // loop for rows
    {
        for (int j = 0; j < i; j++) // loop for printing spaces
        {
            printf(" ");
        }
        for (int k = i; k < 5; k++) // loop for printing stars
        {
            printf("*");
        }
        printf("\n"); // Moves to a new line after complition of printing
    }

    return 0;
}
