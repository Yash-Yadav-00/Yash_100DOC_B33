// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

// /*
// Sample Test Cases:
// Input 1:
// nums = [5,7,7,8,8,10], target = 8
// Output 1:
// 3,4

// Input 2:
//  nums = [5,7,7,8,8,10], target = 6
// Output 2:
// -1,-1

// Input 3:
//  nums = [5,7,7,8,8,10], target = 10
// Output 3:
// 5,5

// */
#include <stdio.h>
int main()
{
    int a, n, first = -1, last = -1;        // Declare Variables
    printf("Enter number of Elements: \n"); // Take Input From User
    scanf("%d", &a);
    int arr[a];
    printf("Enter %d Elements: ", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to Search:\n "); // Ask the element to Search
    scanf("%d", &n);

    for (int j = 0; j < a; j++) // Find First Occurence
    {
        if (arr[j] == n)
        {

            first = j; // Store the First Appearence Index
            break;
        }
    }
    for (int j = a - 1; j >= 0; j--) // Find The Second Appearence
    {
        if (arr[j] == n) // Store the Second Appearence Index
        {

            last = j;
            break;
        }
    }
    printf("%d,%d", first, last); // Displau Output
    return 0;
}