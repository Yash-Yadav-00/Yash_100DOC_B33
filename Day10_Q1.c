//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>

int main(){
    int a,b,c;                                        //Declare Variables

   printf("Enter Sides of the triangle: ");          //Take Input from User
    scanf("%d%d%d",&a,&b,&c);

     if (a==b && b==c){                      //if all 3 sides are equal Then it is equilateral
    printf("Equilateral Triangle\n");
     }
    else if(a == b || b == c || c == a){    //if any of the 2 sides are equal
        printf("Isosceles Triangle\n");
    }
     else if((a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b)){  //if pythagorean theorem applies it's right angled
         printf("It is an Right Angled triangle.\n");
    }
    else {                                                               //otherwise it is scalene
        printf("Scalene Triangle\n");
    }
 
    return 0;
}
