#include<stdio.h>
int main (){
   // Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

int a,b,c;                 //variables for numbers and result.

printf("Enter your First Number: "); //Take first number from user
scanf("%d",&a);                       //Reads the first integer
printf("Enter Your Second No.: ");   //Take second number from user
scanf("%d",&b);                      //Reads the second integer
c=a+b;                               //Addition

printf("Addition:%d",c);             //Display Result
    return 0;
}