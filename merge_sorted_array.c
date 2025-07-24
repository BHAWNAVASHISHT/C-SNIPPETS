/* Write a program to merge two sorted arrays.*/
#include <stdio.h>

int main() {
    int n, n2, a1[100], a2[100], n3;
    printf("Enter number of elements in array 1: ");
    scanf("%d", &n);
    printf("Enter number of elements in array 2: ");
    scanf("%d", &n2);
    
    printf("Enter elements of array 1 (sorted): ");
    for (int j = 0; j < n; j++) {
        scanf("%d", &a1[j]);
    }
    
    printf("Enter elements of array 2 (sorted): ");
    for (int j = 0; j < n2; j++) {
        scanf("%d", &a2[j]);
    }
    
    n3 = n + n2;
    int a3[n3];
    int i = 0, j = 0, k = 0;

    while (i < n && j < n2) {
        if (a1[i] < a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }
    
    while (i < n) {
        a3[k++] = a1[i++];
    }
    
    while (j < n2) {
        a3[k++] = a2[j++];
    }
    
    printf("Merged Sorted Array: ");
    for (int j = 0; j < n3; j++) {
        printf("%d ", a3[j]);
    }
    printf("\n");

    return 0;
}
