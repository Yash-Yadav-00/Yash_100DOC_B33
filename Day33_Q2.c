// Q66: Insert an element in a sorted array at the appropriate position.

// /*
// Sample Test Cases:
// Input 1:
// 5
// 1 2 4 5 6
// 3
// Output 1:
// 1 2 3 4 5 6

// */
#include <stdio.h>
int main(){

    int arr[10];
    int a,b,n;

    printf("Enter Number Of Elements: ");
    scanf("%d",&a);
 
    printf("Enter Elements: ");
    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for (int k = 0; k < a; k++)   
    {
        printf("%d \n", arr[k]);
    }
    printf("Enter the number You want to Insert: ");
    scanf("%d",&n);

    for(int j =0;j<a;j++){
        if(arr[j-1]<n<arr[j+1]){
            n=arr[j];
            
        }
    }
     for (int l = 0; l < a; l++)   
    {
        printf("%d ", arr[l]);
    }


    


    return 0;
}