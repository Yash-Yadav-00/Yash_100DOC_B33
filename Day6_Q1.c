//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main(){
    int num;              //Define Integer

    printf("Enter Integer: ");        //Take Input from user
    scanf("%d",&num);

    if(num % 2 == 0){                   //Checks if The Remainder after Dividing by 2 is 0

        printf("%d is Even",num);       //if The Remainder is 0 ,,The Number is Even
    }
        else{
            printf("%d is Odd",num);    //Otherwise The number is Odd
        }
    
    return 0;
}