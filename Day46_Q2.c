// Q92: Find the first repeating lowercase alphabet in a string.

// /*
// Sample Test Cases:
// Input 1:
// stress
// Output 1:
// s

// */
#include <stdio.h>
int main()
{

    char str[20];                    // Declare String
    printf("Enter Your String: \n"); // Take Input From User
    fgets(str, sizeof(str), stdin);
    for (int j = 0; str[j] != '\0'; j++) // loop till the last charcter of string
    {

        for (int i = 0; i < j; i++) // For each position j, we check all characters before it
        {
            if (str[i] == str[j]) // If any previous character matches current character
            {
                printf("%c", str[i]); // Print the first repeating character
                return 0;             // Exit Program
            }
        }
    }
    printf("No Repeating Character"); // Print if no Repeating Program
    return 0;
}