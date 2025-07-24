/*2. Write a program to display the following pattern upto N rows, taking the value of N from the user:
1
2	3
4	5	6
7	8	9	10*/
#include <stdio.h>
int main()
{
int rows,i,j,num=1;
printf("ENTER NUMBER OF ROWS TO DISPLAY PATTERNS UPTO:");
scanf("%d",&rows);
for (i=1;i<=rows;i++)
{
    for (j=1;j<=i;j++)
    {
        printf("%d\t",num);
        num++;
    }
    printf("\n");
}
return 0;
}







    
