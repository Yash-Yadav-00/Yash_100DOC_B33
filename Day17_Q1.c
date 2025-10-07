//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main(){

    int a,num,n,cube = 0;           //Declare Variables(Initally we are gonna store 0 in cube)

    printf("Enter a Number: ");    //Take Input from User
    scanf("%d",&a);

    num = a;

while(a > 0){
    n = a % 10;                        //This gets the last digit
    cube = cube + (n*n*n);               //Cube and adds 
    a = a /10;                         //removes last digit
}
if (num == cube ){                    //Displays Output
    printf("Armstrong");
}
else{
    printf("Not Armstrong");
}


    return 0;
}