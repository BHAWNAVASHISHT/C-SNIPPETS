/*Write a program to display pascal’s triangle.*/
#include <stdio.h>
int main() {
    int rows;
    int triangle[10][10];
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        triangle[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            printf("  ");
        for (int j = 0; j <= i; j++) {
            printf("%4d", triangle[i][j]);
        }
        printf("\n");
    }
    return 0;
}
