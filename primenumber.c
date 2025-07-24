/* Write a program to check if a given number is a prime number or not.*/
#include <stdio.h>
int main()
{
int num,i,count=0;
printf("ENTER A NUMBER TO CHECK WHETHER IT'S A PRIME OR NOT:");
scanf("%d",&num);
   if (num <= 1)
    {  
        printf("ENTERED NUMBER IS NOT A PRIME NUMBER\n");
        return 0;
    }
for (i=2;i<num;i++)
{
    if (num%i==0)
    {
        count++;
        break;
    }
}
if (count==0)
{
    printf("IT'S A PRIME NUMBER");
}
else
{
    printf("ENTERED NUMBER IS NOT A PRIME NUMBER");
}
return 0;
}
