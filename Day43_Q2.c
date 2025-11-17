// Q86: Check if a string is a palindrome.

// /*
// Sample Test Cases:
// Input 1:
// madam
// Output 1:
// Palindrome

// Input 2:
// hello
// Output 2:
// Not palindrome

// */
#include <stdio.h>
int main()
{
    char str[100];
    char str2[100];
    int count = 0, k = 0; // to count the number of Characters

    printf("Enter Your String:\n"); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // Count The Number Of Characters
    {
        count++;
    }
    for (int j = count - 1; j >= 0, str[k] != '\0'; j--, k++) // Print The Characters From The Last(Reverse Orderr)
    {
        str2[k] = str[j];
    }
    for (int l = 0; l != '\0'; l++)
    {
        if (str2[l] == str[l])
        {
            printf("Palindrome");
        }
        else
        {
            printf("Not Palindrome");
        }
    }

    return 0;
}