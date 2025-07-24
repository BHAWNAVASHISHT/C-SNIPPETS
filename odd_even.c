// Write a program to read any number and check whether it is an 
//odd number or even number.

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    (number%2==0) ? printf("even"):printf("odd");
    return 0;
}
