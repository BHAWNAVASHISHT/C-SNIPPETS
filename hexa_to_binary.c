/*Write a program to convert a hexadecimal number into a binary number.*/
#include <stdio.h>
int main() {
    char hex[20];
    int i;
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    for (i = 0; hex[i] != '\0'; i++) {
        if (hex[i] == '0') printf("0000");
        if (hex[i] == '1') printf("0001");
        if (hex[i] == '2') printf("0010");
        if (hex[i] == '3') printf("0011");
        if (hex[i] == '4') printf("0100");
        if (hex[i] == '5') printf("0101");
        if (hex[i] == '6') printf("0110");
        if (hex[i] == '7') printf("0111");
        if (hex[i] == '8') printf("1000");
        if (hex[i] == '9') printf("1001");
        if (hex[i] == 'A' || hex[i] == 'a') printf("1010");
        if (hex[i] == 'B' || hex[i] == 'b') printf("1011");
        if (hex[i] == 'C' || hex[i] == 'c') printf("1100");
        if (hex[i] == 'D' || hex[i] == 'd') printf("1101");
        if (hex[i] == 'E' || hex[i] == 'e') printf("1110");
        if (hex[i] == 'F' || hex[i] == 'f') printf("1111");
    }
    printf("\n");
    return 0;
}
