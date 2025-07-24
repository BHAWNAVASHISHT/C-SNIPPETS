/*Write a program to find the number of words in a given statement.*/
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int wordCount = 0;

    printf("Enter a statement: ");
    fgets(text, sizeof(text), stdin);
    
    // Trim newline character from fgets
    text[strcspn(text, "\n")] = '\0';

    // Use strtok to split the string into words
    char *token = strtok(text, " ,.!?;:\n\t");
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ,.!?;:\n\t");
    }

    printf("Number of words: %d\n", wordCount);
    return 0;
}
