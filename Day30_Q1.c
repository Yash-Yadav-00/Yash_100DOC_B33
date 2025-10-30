// Q59: Count even and odd numbers in an array.

// /*
// Sample Test Cases:
// Input 1:
// 6
// 1 2 3 4 5 6
// Output 1:
// Even=3, Odd=3

// Input 2:
// 4
// 2 4 6 8
// Output 2:
// Even=4, Odd=0

// *
#include <stdio.h>
int main()
{

    int a, even = 0, odd = 0;  //counters for even and odd numbers
    int arr[10];

    printf("Enter Number of Elements: ");     //Take input from user   
    scanf("%d", &a);

    printf("Enter Your Elements: "); //store values in array
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < a; j++)      //check for even and odd numbers
    {
        if (arr[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even = %d, Odd = %d", even, odd);        //Displays Output

    return 0;
}