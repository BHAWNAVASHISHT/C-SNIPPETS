//2.Write a program to find whether the array of integers contains a duplicate number.
#include <stdio.h>
int duplicate(int n,int arr[])
{
    int i,count=0,j;
    for(i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
        if(arr[i]==arr[j])
        {
        count++;
        break;
        }
    }
}
    if (count==0)
    {
        printf("ARRAY DO NOT HAVE DUPLICATE VALUES");
    }
    else
    {
        printf("ARRAY HAS DUPLICATE VALUES");
    }
}
int main()
{
    int n,i;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY");
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    duplicate(n,arr);
}
