/*7. If lengths of three sides of a triangle are input through the keyboard,
 write a program to find the area of the triangle.*/
 #include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    double semi, area;
    printf("ENTER THE THREE SIDES OF THE TRIANGLE SO I CAN HELP YOU TO FIND ITS AREA:)))\n");
    printf("ENTER SIDE A: ");
    scanf("%d", &a);
    printf("ENTER SIDE B: ");
    scanf("%d", &b);
    printf("ENTER SIDE C: ");
    scanf("%d", &c);   
     semi = (a + b + c) / 2.0;
     area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
     printf("YOUR AREA IS: %.2lf\n", area);
 }
