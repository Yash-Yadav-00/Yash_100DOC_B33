// Q91: Remove all vowels from a string.

// /*
// Sample Test Cases:
// Input 1:
// education
// Output 1:
// dctn

// */
#include <stdio.h>
int main()
{

    char str[20]; // Declare Variable and strings
    char str2[20];
    int j = 0;

    printf("Enter Your String: "); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // If character is constant store in new string
    {

        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U')
        {
            str2[j] = str[i];
            j++;
        }
    }
    str2[j] = '\0';     // close The Second String
    printf("%s", str2); // Display Output
    return 0;
}
