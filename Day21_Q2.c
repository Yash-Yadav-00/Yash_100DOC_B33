#include <stdio.h>

int main() {
    int n,i,sum = 0;   // n = input number, i = loop variable, sum = to store sum of divisors

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n / 2; i++) {      //i is 1 because 1 is the greatest divisor
        if (n % i == 0) {
            sum = sum + i;                   // add divisor to sum
        }
    }

    //Check if the number is perfect
    if (sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is NOT a Perfect Number.\n", n);

    return 0;
}
