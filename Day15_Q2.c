//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int num, rev = 0, digit;                //Declare Variable

    printf("Enter a number: ");          //Take input From User 
    scanf("%d", &num);

    while (num != 0) {                 //It will run until given number is equal to 0 
        digit = num % 10;         // Get the last digit
        rev = rev * 10 + digit;   // Add it to reversed number
        num = num / 10;           // Remove the last digit
    }

    printf("Reversed number = %d\n", rev);      //Displays Output

    return 0;
}
