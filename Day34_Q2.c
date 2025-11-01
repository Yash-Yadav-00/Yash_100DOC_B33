// Q68: Delete an element from an array.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 3 4 5
// 2
// Output 1:
// 1 2 4 5

// */
#include <stdio.h>
int main()
{

    int a,b;
    int arr[10];

    printf("Enter the number of elements: ");  //no. of elements
    scanf("%d", &a);
   

    printf("Enter your Elements: ");  //take input of elements
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);         //stores every elements in array
    }
 printf("Enter the Element You want to delete: ");
 scanf("%d",&b);



 for(int k = b;k<a;k++){
    {
        arr[k]=arr[k+1];
    }

 }
    for (int j = 0; j < a; j++)   //prints the stored elements
    {
        printf("%d ", arr[j]);
    }
    return 0;
}