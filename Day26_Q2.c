//Q52: Write a program to print the following pattern:

/*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main(){

    for(int i = 1;i<=5;i++){
        for(int j = 0;j<=i;j++){
        if(j%2 !=0 ){
            printf("*");
        }
        else{
            printf("\n");
        }
        }
    }

    return 0;
}