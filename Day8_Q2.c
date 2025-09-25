//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>

int main(){
 
    int a,b,c;                             // Declare Variable

    printf("Enter 3 integers: ");         // Take Input From User
    scanf("%d%d%d",&a,&b,&c);

    if(a > b && a > c){                  // This Condition checks if a is greatest
    printf("Largest is %d ",a);
    }
    else if (b > a && b > c){            // This Condition checks if b is greatest
        printf("Largest is %d",b);
    }
    else {
        printf("Largest is %d",c);       // This Condition checks if c is greatest 
    }
    return 0;
}