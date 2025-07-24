#include <stdio.h>
//3.Write a program to insert a number in an array that is already sorted in ascending order.
    void insert(int n,int arr[],int num)
    {
        int i,j;
        for (i=0;i<n;i++)
        {
                if (arr[i]>num)
                {
                    break;
                }
        }
        for (j=n;j>i;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[i]=num;
        n++;
        printf("UPDATED ARRAY AFTER INSERTION OF THE NUMBER ENTERED IN THE SORTED FORM: ");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    int main()
    {
        int n,i,num;
        printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY:");
        scanf("%d",&n);
        printf("ENTER THE ELEMENTS OF THE ARRAY");
        int arr[n];
        for (i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("ENTER THE NUMBER TO BE INSERTED IN TE SORTED ARRAY:");
        scanf("%d",&num);
        insert(n,arr,num);
        return 0;
    }
