// Q85: Reverse a string.

// /*
// Sample Test Cases:
// Input 1:
// abcd
// Output 1:
// dcba

// */
#include <stdio.h>
int main()
{
    char str[100];
    int count = 0; // to count the number of Characters

    printf("Enter Your String:\n"); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // Count The Number Of Characters
    {
        count++;
    }
    for (int j = count; j >= 0; j--) // Print The Characters From The Last(Reverse Orderr)
    {
        printf("%c", str[j]);
    }
    return 0;
}