// Q54: Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


// /*
// Sample Test Cases:
// Input 1:

// Output 1:
// Pattern with layers of stars as shown.

// */
#include <stdio.h>
int main(){

    for(int i = 0;i<=7;i++){
    for(int j = 0;j<=i;j++){
            printf("*");
    }
    printf("\n");
}




    return 0;
}