/* Write a program to perform matrix addition, matrix multiplication and matrix transpose on 2D arrays.*/
#include <stdio.h>

int main() {
    int choice, rows1, cols1, rows2, cols2;
    int mat1[10][10], mat2[10][10], result[10][10];
    
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            scanf("%d", &mat1[i][j]);
    
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            scanf("%d", &mat2[i][j]);
    
    do {
        printf("\nMenu:\n1. Matrix Addition\n2. Matrix Multiplication\n3. Matrix Transpose\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            if (rows1 == rows2 && cols1 == cols2) {
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < cols1; j++)
                        result[i][j] = mat1[i][j] + mat2[i][j];
                printf("Result of Matrix Addition:\n");
                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < cols1; j++)
                        printf("%d ", result[i][j]);
                    printf("\n");
                }
            } else
                printf("Addition not possible, matrices should be of the same dimensions.\n");
        }
        
        else if (choice == 2) {
            if (cols1 == rows2) {
                for (int i = 0; i < rows1; i++)
                    for (int j = 0; j < cols2; j++) {
                        result[i][j] = 0;
                        for (int k = 0; k < cols1; k++)
                            result[i][j] += mat1[i][k] * mat2[k][j];
                    }
                printf("Result of Matrix Multiplication:\n");
                for (int i = 0; i < rows1; i++) {
                    for (int j = 0; j < cols2; j++)
                        printf("%d ", result[i][j]);
                    printf("\n");
                }
            } else
                printf("Multiplication not possible, columns of Matrix 1 must equal rows of Matrix 2.\n");
        }
        
        else if (choice == 3) {
            printf("Transpose of Matrix 1:\n");
            for (int i = 0; i < cols1; i++) {
                for (int j = 0; j < rows1; j++)
                    printf("%d ", mat1[j][i]);
                printf("\n");
            }
            printf("Transpose of Matrix 2:\n");
            for (int i = 0; i < cols2; i++) {
                for (int j = 0; j < rows2; j++)
                    printf("%d ", mat2[j][i]);
                printf("\n");
            }
        }
        
    } while (choice != 4);

    return 0;
}
