#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int num, i;

    // Open files for writing
    evenFile = fopen("EvenFile.txt", "w");
    oddFile = fopen("OddFile.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    printf("Enter 20 numbers:\n");

    // Input 20 numbers from user and write them to appropriate files
    for (i = 0; i < 20; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close the files
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been saved to EvenFile and OddFile.\n");

    return 0;
}
