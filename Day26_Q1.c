//Q51: Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>
int main(){

for(int i = 5;i >= 1;i--){         //loop for rows
    for(int sp = 0;sp < i;sp++){     //loop prints spaces
    printf(" ");
    }
    for(int j = i;j<=5;j++){      //loop prints numbers
        printf("%d",j);
    }
    printf("\n");
}
    return 0;
}
