///Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {

    int a, n, product = 1;                //Declare Variables(product is 1 as if there is no odd digit it will print 1)

    printf("Enter a number: ");           //Take Input From User
    scanf("%d", &a);

    for (; a > 0; a = a / 10) {           
        n = a % 10;                                                      // get last digit

        if (n % 2 != 0) {                             // checks if the digit is odd
            product = product * n;              
        }
    }

    printf("%d", product);                                 // Displays Output

    return 0;
}

