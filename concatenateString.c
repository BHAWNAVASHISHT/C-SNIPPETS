#include <stdio.h>
#include <string.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    char *ptr = result;

    while (*str1 != '\0') {
        *ptr++ = *str1++;
    }

    while (*str2 != '\0') {
        *ptr++ = *str2++;
    }

    *ptr = '\0';
}

void removeNewline(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        ptr++;
    }
}

int main() {
    char str1[100], str2[100], result[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    removeNewline(str1);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    removeNewline(str2);

    concatenateStrings(str1, str2, result);

    printf("Concatenated string: %s\n", result);

    return 0;
}
