/*Write a program to sum the series – 1/1! + 1/2! + 1/3! + 1/4! + ...... + 1/n!*/
#include <stdio.h>
double factorial(int n) 
{
    double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
double sumSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / factorial(i);
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        double result = sumSeries(n);
        printf("The sum of the series 1/1! + 1/2! + ... + 1/%d! is: %lf\n", n, result);
    }
    return 0;
}
