// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

// /*
// Sample Test Cases:
// Input 1:
// nums = [3,2,3]
// Output 1:
// 3

// Input 2:
// nums = [2,2,1,1,1,2,2]
// Output 2:
// 2

// Input 3:
// nums = [2,2,1,1,1,2,2,3]
// Output 3:
// -1

// */
#include <stdio.h>
int main()
{
    int a, num = -1; // Default Value if no such Element Exist
    int count;
    printf("Enter Number Of Elements: "); // Take Input From User
    scanf("%d", &a);
    int arr[a]; // Declare Array
    printf("Enter %d Elements: ", a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < a; j++) // loop For calculating frequenct of each element in array
    {
        count = 0; // reset count for next element
        for (int k = 0; k < a; k++)
        {
            if (arr[k] == arr[j])
            {
                count++;
                if (count > a / 2)
                {
                    num = arr[k]; // store the number
                    break;
                }
            }
        }
    }

    printf("%d", num); // Display Output

    return 0;
}