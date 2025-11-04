// Q31: Write a program to take a number as input and print its equivalent binary representation.

// /*
// Sample Test Cases:
// Input 1:
// 10
// Output 1:
// 1010

// Input 2:
// 7
// Output 2:
// 111

// */
#include <stdio.h>

int main()
{
    int num;
    int binary = 0;
    int remainder;
    int place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 explicitly
    if (num == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0)
    {
        remainder = num % 2;                 // get binary digit
        binary = binary + remainder * place; // build binary number
        num = num / 2;                       // divide by 2
        place = place * 10;                  // increase place value (1,10,100,...)
    }

    printf("Binary: %d\n", binary);

    return 0;
}
