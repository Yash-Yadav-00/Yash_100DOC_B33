//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, n;                                                   //Declare variables

    printf("Enter two numbers: ");                           //Take Input From User
    scanf("%d %d", &a, &b);

                                                                // Start checking from the larger number
    if (a > b){
        n = a;
    }
    else {
        n =b;
    }

                                                         // Keep increasing lcm until it is divisible by both
    for(;;n++) {                                           //using ;; makes a for loop infinte 
        if (n % a == 0 && n % b == 0) {
            printf("LCM = %d", n);
            break;                                          // exit loop when found
        }
                                                     // try next number
    }

    return 0;
}
