//1.Write a program to enter n number of digits. Form a number using these digits.
#include<stdio.h>
void formnumber(int arr[],int n)
{
    int i;
    int numberformed=0;
    for (i=0;i<n;i++)
    {
        numberformed=numberformed*10+arr[i];
    }
    printf("NUMBER FORMED FROM ENTERED DIGITS IS:%d",numberformed);
}
int main()
{
    int n,i;
    printf("ENTER THE NUMBER OF DIGIT YOU WANT TO ENTER TO FORM THE NUMBER");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE NUMBERS");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    formnumber(arr,n);
}
