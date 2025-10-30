// Q58: Find the maximum and minimum element in an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 2 9 1 4 7
// Output 1:
// Max=9, Min=1

// Input 2:
// 3
// 10 10 10
// Output 2:
// Max=10, Min=10

// *
#include <stdio.h>
int main()
{

    int a, min, max;
    int arr[10];

    printf("Enter the number of elements: ");  
    scanf("%d", &a);

    printf("Enter your Elements: "); //Take Input from user
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);          //Stores elements in array
    }
    min = arr[0];    //assume that first element is mininmum as well as maxiumum
    max = arr[0];
    for (int j = 0; j < a; j++)     //loop for finding minimum and maximum
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        else if (arr[j] < min)
        {
            min = arr[j];
        }
    }
    printf("Max = %d, Min = %d", max, min);       //displays output
    return 0;
}