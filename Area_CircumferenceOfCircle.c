//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>

int main(){
float a,b,c;               //Use float to account for decimal values


printf("Enter the Radius Of circle: ");   //Input radius of circle 
scanf("%f",&a);


b = 3.14159 * a * a;             //Calculation of Area
c = 2 * 3.14159 * a;            //Calculation of Circumference


printf("Area of circle: %.2f\n",b);      //Display Output
printf("Circumference of Circle: %.2f",c);


return 0;
}