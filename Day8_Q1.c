//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>

int main(){
    char ab;

    printf("Input a Character: ");
    scanf("%c",&ab);

    if(ab >= 'A' && ab <= 'Z' ){
        printf("UpperCase Alphabet");
    }
    else if(ab >= 'a' && ab <= 'z'){
        printf("LoweCase Alphabet");
    }
    else if(ab >= '0' && ab <= '9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
return 0;

}