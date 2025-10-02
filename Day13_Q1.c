//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>

int main(){

    int num1,num2;                                 //Declare Variable
    char op;

    printf("Enter 2 number and operation symbol: "); //Take Input from user 
scanf("%d %d %c",&num1,&num2,&op);

switch (op) {                                      //Switch case for operators
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            printf("%d\n", num1 / num2);
            break;
        case '%':
        printf("%d\n",num1 % num2);
        break;
}
return 0;

}