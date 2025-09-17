//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>

int main() {
    float a,b;

    printf("Enter temperature in Celsius: ");        // Input temperature in Celsius
    scanf("%f", &a);

    b = (a * 9 / 5) + 32;                            // Conversion Celsius Int Fahrenheit

    printf("%.2f Celsius = %.2f Fahrenheit\n",a,b);   // Display result

    return 0;
}
