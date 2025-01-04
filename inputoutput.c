/*C PROGRAMMING BASIC INPUT OUTPUT FUNCTIONS*/
#include <stdio.h> //HEADER FILE MUST BE INCLUDED SO THAT ONE CAN USE FUNCTIONS DEFINED IN IT
int main() //EXECUTING BLOCK
{
    //FOR PRINTING
    printf("Hello World"); 
    printf("ENTER YOUR AGE:");
    //DECLARING A VARIABLE
    int a;
    //INPUTTING AND STORING VALUE INTO VARIABLE A 
    scanf("%d",&a);
    // %d is the format specifier for integer and &a for storing value in a 
    printf("VALUE OF A IS : %d",a);
}
