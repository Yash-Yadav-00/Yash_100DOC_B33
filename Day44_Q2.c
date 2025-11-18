// Q88: Replace spaces with hyphens in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello world
// Output 1:
// hello-world

// */
#include <stdio.h>
int main()
{

    char str[20]; // Declare String

    printf("Enter Your String: "); // Take Input From User
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) // Loop For checking every Character of String
    {
        if (str[i] == ' ') // Replace space with Hypen
        {
            str[i] = '-';
        }
    }
    printf("%s", str);
    return 0;
}