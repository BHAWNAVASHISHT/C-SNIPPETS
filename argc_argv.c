#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file1, *file2;
    char ch1, ch2;

    // Ensure correct number of arguments
    if (argc != 3) {
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 1;
    }

    // Open the first file
    file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        printf("Error opening file %s\n", argv[1]);
        return 1;
    }

    // Open the second file
    file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        printf("Error opening file %s\n", argv[2]);
        fclose(file1);
        return 1;
    }

    // Compare the contents of the two files
    while (((ch1 = fgetc(file1)) != EOF) && ((ch2 = fgetc(file2)) != EOF)) {
        if (ch1 != ch2) {
            printf("Files are different.\n");
            fclose(file1);
            fclose(file2);
            return 0;
        }
    }

    // Check if both files have reached EOF
    if ((ch1 == EOF) && (ch2 == EOF)) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different.\n");
    }

    // Close the files
    fclose(file1);
    fclose(file2);

    return 0;
}
