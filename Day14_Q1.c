//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main(){
    int n, sum = 0;                     //Declare variables and initialise sum with 0

    printf("Enter a number: ");          //Take Input from User     
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {          //Loop will keep repeating until i <= n 
        sum = sum + (2 * i - 1);           //we need sum of odd numbers so we will keep incresing sum by 1 
    }

    printf("%d",sum);

    return 0;
}

