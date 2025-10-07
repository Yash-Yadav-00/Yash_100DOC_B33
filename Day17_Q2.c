//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main(){

    int a,n,num;                        
    
    printf("Enter a Number: ");
    scanf("%d",&a);

    a = n;

    for(int i = 0;i < a;i++){
        if( n % i == 0){
            printf("Prime");
        }
        else {
            printf("Not Prime");
        }
    }




    return 0;
}