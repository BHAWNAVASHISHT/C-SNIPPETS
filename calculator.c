/*Write a menu driven program to construct a calculator for following arithmetic operations: 
addition, subtraction, multiplication, division, average and percentage.*/
#include <stdio.h>
int main()
{
    int choice;
    float x, y, sum, total, part;
    int n;
    do {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Average\n");
        printf("6. Percentage\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);
        switch (choice)
         {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f\n", x + y);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f\n", x - y);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                printf("Result: %.2f\n", x * y);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &x, &y);
                if (y != 0) {
                    printf("Result: %.2f\n", x / y);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;

            case 5:
                
                printf("Enter the number of values to calculate average: ");
                scanf("%d", &n);
                sum = 0;
                for (int i = 0; i < n; i++) {
                    printf("Enter number %d: ", i + 1);
                    scanf("%f", &x);
                    sum += x;
                }
                printf("Average: %.2f\n", sum / n);
                break;

            case 6:
                printf("Enter the total value: ");
                scanf("%f", &total);
                printf("Enter the part value: ");
                scanf("%f", &part);
                if (total != 0) {
                    printf("Percentage: %.2f%%\n", (part / total) * 100);
                } else {
                    printf("Error: Total value cannot be zero.\n");
                }
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } 
    while (choice != 7);
    return 0;
}

