//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
    int n,gcd,a;                                         //Declare Variables

    printf("Enter 2 Numbers: ");                        //Take Input From User 
    scanf("%d%d",&n,&a);

    for (int i = 1; i <= n && i <= a; i++){          //Loop will run until i is less than any of the number
        a = a / i;
        n = n / i;
        if(a == n){
            printf("%d",i);
        }

    }
}