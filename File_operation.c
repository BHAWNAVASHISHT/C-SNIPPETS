#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numbers[] = {10, 20, 30, 40, 50};
    int num, position;

    // Open file in binary write mode
    file = fopen("binaryfile.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write the array to the file
    fwrite(numbers, sizeof(int), 5, file);
    fclose(file);

    // Open file in binary read mode
    file = fopen("binaryfile.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Read the first number
    fread(&num, sizeof(int), 1, file);
    printf("First number: %d\n", num);

    // Use ftell to get the current position
    position = ftell(file);
    printf("Current file position after reading first number: %d bytes\n", position);

    // Use fseek to move to the third number (position = 2 * sizeof(int))
    fseek(file, 2 * sizeof(int), SEEK_SET);

    // Read the third number
    fread(&num, sizeof(int), 1, file);
    printf("Third number: %d\n", num);

    // Use rewind to go back to the beginning of the file
    rewind(file);
    printf("After rewind, file position: %ld bytes\n", ftell(file));

    // Read the first number again
    fread(&num, sizeof(int), 1, file);
    printf("First number after rewind: %d\n", num);

    // Close the file
    fclose(file);

    return 0;
}
