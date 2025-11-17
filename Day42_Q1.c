// Q83: Count vowels and consonants in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

// */
#include <stdio.h>
int main()
{
    char str[100];                 // Declare String
    int vowels = 0, consonant = 0; // Counters for Vowel and consonant

    printf("Enter Your String: \n"); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];

        // check if c is a letter
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            { // If Character is a vowel increase vowel count
                vowels++;
            }
            else
            { // else consonant count
                consonant++;
            }
        }
    }
    printf("Vowels:\n%d\nConsonant:\n%d", vowels, consonant);
    return 0;
}