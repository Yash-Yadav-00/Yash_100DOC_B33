//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main (){

    int a,fact = 1,i;                        //Declare Variable

    printf("Enter a Number: ");              //Take Input from user
    scanf("%d",&a);

    for( i = a;i >= 1; i--){           //loop will run until i = 1 and will keep decresing its value by 1 

        fact = fact * i;                   
    
    }
    printf("%d",fact);               //Displays Output
}