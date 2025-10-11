//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main(){

    int i,remainder,sum = 0;                          //Declare variables(we will initialize sum as 0 otherwise it will have garbage value)

    printf("Enter a Number: ");                   //Take Input From User
    scanf("%d",&i);

    for(; i > 0;i = i/10){                     //divide by 10 to get rid of the last value 
    remainder = i % 10;                       //gets the last digit
    sum = sum + remainder;                    //Add to the sum  
    }
    printf("%d",sum);
    

    return 0;
}