//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main (){
   
    int a,n;

    printf("Enter a Binary Number: ");
    scanf("%d",&n);

    for(;a > 0;n = a % 10){

        n = (n == 0)? 1 : 0;
           n = n*10 + n;
        }
        printf("%d",n);

    return 0;
    }



