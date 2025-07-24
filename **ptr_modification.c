#include <stdio.h>
int main() {
    int value = 10;
    int *ptr = &value;
    int **ptr_to_ptr = &ptr;

    printf("Original value: %d\n", value);

    **ptr_to_ptr = 20;

    printf("Modified value: %d\n", value);

    return 0;
}
