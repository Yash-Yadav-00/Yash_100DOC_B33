//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/#include <stdio.h>
int main(){

    int a,b,c,d;  //Define Variables

printf("Enter the Length of your Reactangle: ");       //Take Length From User
scanf("%d",&a);                                       //Read Length
printf("Enter the Breadth of your Reactangle: ");     //Take breadth From user
scanf("%d",&b);                                      //Read Breadth           
c=a*b;                                        //Calculation of AREA
d=2*(a+b);                                    //calculation of PERIMETER
    
printf("The Area of the rectangle is:%d\n",c);     //Display OUTPUT
printf("Perimeter of the rectangle is: %d",d); 

return 0;
}