//Q26: Write a program to print numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
5
Output 1:
1 2 3 4 5

Input 2:
3
Output 2:
1 2 3

*/
#include <stdio.h>

int main() {
    int a;                   //Declare Variable

    printf("Enter a Number: ");       //Take Input from User
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {       //This loop will run again and again until i <=a 
        printf("%d ", i);                //It will keep Printing each digit incrementing by 1 every time it runs
    }

    return 0;
}
