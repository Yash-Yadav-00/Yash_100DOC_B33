// Q55: Write a program to print all the prime numbers from 1 to n.

// /*
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 2 3 5 7

// Input 2:
// 20
// Output 2:
// 2 3 5 7 11 13 17 19

// */
#include <stdio.h>
int main(){

    int a = 10;

    // printf("Enter a Number: ");
    // scanf("%d",&a);

    for(int i =0;i<=a;i++){
        for(int j = 2;j<a;j++){
        if(a%j!= 0){
            printf(" ");
        }
    }
    }



    return 0;
}