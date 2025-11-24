// Q94: Find the longest word in a sentence.

// /*
// Sample Test Cases:
// Input 1:
// I love programming
// Output 1:
// programming

// */

#include <stdio.h>
int main()
{
    char str[100];
    int length = 0, maxlength = 0;
    printf("Enter Your String: \n"); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // Loop Till The End Of String
    {

        if (str[i] != ' ' && str[i] != '\n') // If There is a Space Reset Length
        {
            length++;
        }
        else
        {

            length = 0;
        }
        if (length > maxlength) // Compare Length For The Word Before
        {
            maxlength = length; // Update MaxLength
        }
    }
    printf("%d", maxlength); // Display Output
    return 0;
}