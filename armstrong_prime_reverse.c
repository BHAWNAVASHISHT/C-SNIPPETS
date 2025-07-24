#include <stdio.h>
#include <math.h>

int main() {
    int choice;

    printf("PRESS 1 TO PRINT ARMSTRONG NUMBERS\n");
    printf("PRESS 2 TO DISPLAY PRIME NUMBERS UP TO THE LIMIT GIVEN\n");
    printf("PRESS 3 TO REVERSE AN INTEGER AND FIND SUM OF ITS DIGITS\n");
    printf("ENTER YOUR CHOICE: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int n;
            printf("Enter the upper limit: ");
            scanf("%d", &n);
            printf("Armstrong numbers up to %d are:\n", n);

            for (int num = 10; num <= n; num++) { // Start from 10 to exclude single-digit Armstrong numbers
                int originalNum = num;
                int sum = 0;
                int digits = 0;
                int temp = originalNum;

                while (temp != 0) {
                    temp /= 10;
                    digits++;
                }

                temp = originalNum;
                while (temp != 0) {
                    int remainder = temp % 10;
                    sum += pow(remainder, digits);
                    temp /= 10;
                }

                if (sum == originalNum) {
                    printf("%d ", originalNum);
                }
            }
            printf("\n");
            break;
        }
        case 2: {
            int n;
            printf("Enter the upper limit to display prime numbers: ");
            scanf("%d", &n);
            printf("Prime numbers up to %d are:\n", n);

            for (int num = 2; num <= n; num++) {
                int count = 0;
                for (int i = 2; i < num; i++) {
                    if (num % i == 0) {
                        count++;
                        break;
                    }
                }
                if (count == 0) {
                    printf("%d ", num);
                }
            }
            printf("\n");
            break;
        }
        case 3: {
            int num, reverse = 0, sum = 0;
            printf("Enter an integer: ");
            scanf("%d", &num);
            int originalNum = num;

            while (num != 0) {
                int digit = num % 10;
                reverse = reverse * 10 + digit;
                sum += digit;
                num /= 10;
            }

            printf("Reverse of %d is: %d\n", originalNum, reverse);
            printf("Sum of digits of %d is: %d\n", originalNum, sum);
            break;
        }
        default:
            printf("Invalid choice! Please choose a valid option (1, 2, or 3).\n");
    }

    return 0;
}
