// Q87: Count spaces, digits, and special characters in a string.

// /*
// Sample Test Cases:
// Input 1:
// a b1&2
// Output 1:
// Spaces=1, Digits=2, Special=1

// */
#include <stdio.h>
int main()
{

    char str[20];
    int Alphabet = 0, digit = 0, special = 0, space = 0; // Declare Variables

    printf("Enter Your String: "); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // Loop for characters of string
    {

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // Nested if Else Statement for Counting Digits Spaces and Special Characters
        {
            Alphabet++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            special++;
        }
    }
    printf("Alphabet: %d\nSpace: %d\nDigit %d\nSpecial: %d\n", Alphabet, space, digit, special - 1);

    return 0;
}