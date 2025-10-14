//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
int main(){

    int a, n,num = 1 ,den = 1;               //Declare Variables
    float sum = 0;
    printf("Enter Your Number: ");                 //Take Input From User
    scanf("%d",&a);

    for(n=1; n < a; n++){

        num = num + 1;
        den = den +2;

        sum = sum + num/den;
    }

    printf("Approximate value= %.1f",sum);

    return 0;
}