//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal, Rate and Time: ");                                   // Input From User
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100;                           // Simple Interest formula

    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;   // Compound Interest formula

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);      //Daisplay Output

    return 0;
}
