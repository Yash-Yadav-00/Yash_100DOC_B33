//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>

int main(){

    int num;              //Define Integer

    printf("Enter a Integer: ");    //Take Input from User
    scanf("%d",&num); 

    if(num < 0)                     //Check if the number is less then 0
    {
    printf("%d is Negative",num);   
    }
    else if (num == 0)              //Checks if the number is 0
    {
        printf("Zero0",num);                  
    }
    else {
        printf ("%d is Positive",num);  //Displays Output
    }
    
    return 0;
    
}