#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr + size - 1;

    printf("Array elements in reverse order: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(ptr - i));
    }

    return 0;
}
