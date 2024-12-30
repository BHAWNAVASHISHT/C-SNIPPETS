/* Write a program to display 1 if inputted number is between 1 and 100 otherwise 0. Use logical AND (&&) operator. */
#include <stdio.h>
int main()
{
    int v;
    printf("\nIF YOU WILL ENTER no. between 1 and 100, THE RESULT WOULD BE 1");
    printf("\nIF YOU WILL ENTER ANY OTHER NO. WHICH IS NOT B/W 1 AND 100 , THE RESULT WOULD BE 0");
    printf("\nENTER NUMBER: ");
    scanf(" %D", &v);
    printf("%d\n", (v >= 1 && v <= 100));

    return 0;
}