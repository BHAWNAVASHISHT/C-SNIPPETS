#include <stdio.h>
#include <string.h>
int main() {
    char text[100], result[100];
    int j = 0;
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
            text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U') {
            result[j++] = text[i];
        }
    }
    result[j] = '\0';
    printf("Text after removing vowels: %s\n", result);
    return 0;}
