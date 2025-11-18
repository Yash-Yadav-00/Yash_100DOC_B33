// Q89: Count frequency of a given character in a string.

// /*
// Sample Test Cases:
// Input 1:
// programming
// g
// Output 1:
// 2

// */
#include <stdio.h>
int main()
{
    char str[20]; // Declare Variables
    char ch;
    int freq = 0;

    printf("Enter Your String: "); // Take Input From User
    fgets(str, sizeof(str), stdin);

    printf("Enter a Character: "); // Take Input of Character to be searched
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch) // If character is found Increase Frequency Count
        {
            freq++;
        }
    }
    printf("Frequency of %c is: %d", ch, freq); // Display Output

    return 0;
}