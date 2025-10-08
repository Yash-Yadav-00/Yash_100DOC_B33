//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

int main(){

    int n,i;                                      //Declare Variables

    printf("Enter A Number: ");                  //Take Input From User
    scanf("%d",&n);

    for(int i = 1; i <= n;i++){              //Loop runs until i is equal to n

        if(n % i == 0){                      //Whenever the remainder division is 0 its prints the value
             printf("%d ",i);
        }
       
    }




    return 0;
}