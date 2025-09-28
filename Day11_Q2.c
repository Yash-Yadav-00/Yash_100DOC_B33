//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main(){

    int cp,sp;                                      //Declare Variable
    int profit ,loss;

    printf("Enter Cost Price: ");                   //Take Input from User 
    scanf("%d",&cp);

    printf("Enter Selling Price: ");
    scanf("%d",&sp);

    profit =(sp - cp)*100/cp;                          //Calculation Of Profit And Loss
    loss = (cp -sp)*100/cp;


    if (cp == sp){                               //Condition For No profit No Loss
        printf("No Profit No Loss");
    }
    else if(cp > sp){                          //Conditon for Loss
        printf("Loss : %d%%",loss);             // %% is Used To print % symbol 
    }
    else {
        printf("Profit : %d%%",profit);      //For Profit
    }
    return 0;
}