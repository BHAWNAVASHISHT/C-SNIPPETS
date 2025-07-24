#include <stdio.h>

int findMax(int *arr, int size) {
    int *max = arr;
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > *max) {
            max = arr + i;
        }
    }
    return *max;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = findMax(arr, size);
    printf("Maximum element: %d\n", maxElement);

    return 0;
}
