//Q47: Write a program to print the following pattern:
//*
//**
//***
//****
//*****

/*
Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/
#include <stdio.h>
int main(){

    for(int i = 1;i < 6;i++){                //rows
        for (int j = 0; j < i; j++)   //prints stars in each rows
        {
            printf("*");
        }
        printf("\n");             //moves to the next line
    } 




    return 0;
}