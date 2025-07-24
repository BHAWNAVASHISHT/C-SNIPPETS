/*Write a program to search for a number entered by the user in a given array by binary search method.*/
#include <stdio.h>

int main() 
{
    int n, search, low, high, mid;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &search);
    low = 0;
    high = n - 1;
    int found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == search) {
            printf("Number found at position %d\n", mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!(found))
    {
        printf("Number not found in the array\n");
    }

    return 0;
}
