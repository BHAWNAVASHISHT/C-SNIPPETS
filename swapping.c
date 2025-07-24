/*Two numbers are input through the keyboard into two locations C and D.
 Write a program to interchange the contents of C and D.*/
 #include <stdio.h>

int main()
 {
    int C, D, temp;
    printf("Enter the value for C: ");
    scanf("%d", &C); 
    printf("Enter the value for D: ");
    scanf("%d", &D);
    printf("Before swapping:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    temp = C;
    C = D;   
    D = temp; 
    printf("After swapping:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
