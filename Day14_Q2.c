//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/


 #include <stdio.h>

int main() {
    int n;                                                   //Declare Variables
    int product = 1;                                             // start with 1 because we are multiplying

    printf("Enter a number: ");                    //Take Input from user       
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {                            // check all numbers from 1 to n
        if (i % 2 == 0) {                                                     // only even numbers
            product = product * i;
        }
    }

    printf("%d\n", product);                                //Display Output

    return 0;
}


