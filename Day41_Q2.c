// Q82: Print each character of a string on a new line.

// /*
// Sample Test Cases:
// Input 1:
// Hi
// Output 1:
// H
// i

// */
#include <stdio.h>

int main()
{

    char str[100];

    printf("Enter Your String:\n");      // Take Input From User
    fgets(str, sizeof(str), stdin);      // Get The string
    for (int i = 0; str[i] != '\0'; i++) // Loop For printing the character of the string in new line
    {
        printf("%c\n", str[i]);
    }

    return 0;
}