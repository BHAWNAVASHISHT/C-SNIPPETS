/*4. Write a user-defined function for performing the following tasks:
◦ Cube of a number
◦ Perimeter of a circle
◦ Conversion of binary to decimal
◦ Addition of individual digits of a given number*/
#include <stdio.h>
#include <math.h>

double cube(double num) {
    return num * num * num;
}

double perimeterOfCircle(double radius) {
    return 2 * M_PI * radius;
}

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int choice;
    double num, radius;
    int binary, number;

    do {
        printf("\nSelect an operation:\n");
        printf("1. Cube of a number\n");
        printf("2. Perimeter of a circle\n");
        printf("3. Convert binary to decimal\n");
        printf("4. Addition of individual digits of a number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%lf", &num);
                printf("Cube of %.2lf is %.2lf\n", num, cube(num));
                break;

            case 2:
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                printf("Perimeter of the circle is %.2lf\n", perimeterOfCircle(radius));
                break;

            case 3:
                printf("Enter a binary number: ");
                scanf("%d", &binary);
                printf("Decimal equivalent is %d\n", binaryToDecimal(binary));
                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Sum of individual digits is %d\n", sumOfDigits(number));
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    return 0;
}
