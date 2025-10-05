//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int a, rev = 0, rem, num;  //Declare Variables (reverse will be initially 0) 

    printf("Enter a Number: ");           //Take Input from User
    scanf("%d", &a);

    num = a;                                     // store the original number

    while (a > 0) {
        rem = a % 10;                             // get last digit
        rev = rev * 10 + rem;                   // build reversed number
        a = a / 10;                                  // remove last digit
    }

    if (num == rev) {                                //Displays Output
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
