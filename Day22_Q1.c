//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
    int n, a, fact,dig, sum = 0, i;    //Declare Variables

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;   // store the original number

    for (; n > 0; n = n / 10) {   // repeat until all digits divided
        dig = n % 10;           // get the last digit

        fact = 1;
        for (i = 1; i <= dig; i++) {  // calculate factorial of the digit
            fact = fact * i;
        }

        sum = sum + fact;         // add factorial to the sum 
    }

    if (sum == a)                       //Dispalys Output
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
