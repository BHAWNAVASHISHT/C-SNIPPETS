/*Write a program to enter a number that should beless than 100 and greater
 than 9. Display the digits of the number in the reverse order using modular
 division and division operation. Also, display the sum of digits too.*/
#include <stdio.h>
int main()
 {
    int number, digit1, digit2, sum;  
    printf("Enter a number between 10 and 99: ");
    scanf("%d", &number); 
    digit1 = number % 10;   // Last digit
    digit2 = number / 10;   // First digit   
    printf("Reversed Number: %d%d\n", digit1,digit2);   
    sum = digit1 + digit2;
    printf("Sum of Digits: %d\n", sum);
    return 0;
}
