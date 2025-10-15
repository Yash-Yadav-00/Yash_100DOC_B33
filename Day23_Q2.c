//Q46: Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>

int main(){

for(int i = 0; i < 5 ;i++){             //loop for rows
    for(int j = 0; j < 5 ;j++){         //loop for columns

        printf("*");                   //prints stars without new line
    

    }
    printf("\n");                      //moves to the next line after one row is printed 
}

    return 0;
}
