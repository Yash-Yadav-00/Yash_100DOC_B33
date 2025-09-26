//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>                      //Use maths.h for using the function sqrt(squareroot)

int main() {
    int a, b, c;                                           //Declare Variables
    int  D, root1, root2;

                                                                      
    printf("Enter coefficients a, b and c: ");                      // Take Input coefficients from User 
    scanf("%d %d %d", &a, &b, &c);

    D = b*b - 4*a*c;                                                // Calculate discriminant

    root1 = (-b + sqrt(D)) / (2*a);                           //Calculate Roots
    root2 = (-b - sqrt(D)) / (2*a);

    if (D > 0) {
        printf("Roots are real and different: %d,%d\n",root1,root2);   // Roots are real and different
    }
    else if (D == 0) {
        printf("Roots are real and same: %d\n",root1);                    // Roots are real and same
    }
    else {
        printf("Roots are complex\n");                         //Roots are complex    
    }

    return 0;
}
