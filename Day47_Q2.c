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
    printf("Enter Your String: \n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] != ' ' && str[i] != '\n')
        {
            length++;
        }
        else
        {

            length = 0;
        }
        if (length > maxlength)
        {
            maxlength = length;
        }
    }
    printf("%d", maxlength);
    return 0;
}