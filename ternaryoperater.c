/* Write a program to enter two numbers. Make a comparison between them with 
a conditional operator. If the first number is greater than the 
second perform division otherwise multiplication operation. 
. */
#include <stdio.h>
int main()
{
    int v1,v2;
    printf("\nIF FIRST NUMBER IS GREATER THAN SECOND , IT WOULD PERFORM DIVISION");
    printf("\nIF FIRST NUMBER IS SMALLER THAN SECOND , IT WOULD PERFORM MULTIPLICATION");
    printf("\nENTER NUMBER1: ");
    scanf(" %d", &v1);
    printf("\nENTER NUMBER2: ");   
    scanf(" %d", &v2);
    v1>v2 ? printf("%d",v1/v2):printf("%d",v1*v2);
    return 0;
}
