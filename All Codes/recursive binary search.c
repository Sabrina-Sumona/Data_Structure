#include<stdio.h>

int n;

int binarySearch(int a[], int key,int low, int high)
{
    int mid;
    if(low==high)
    {
        if(key==a[low])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            return 1;
        }
        else if(key<a[mid])
        {
            return binarySearch(a,key,low,(mid-1));
        }
        else
        {
            return binarySearch(a,key,(mid+1),high);
        }
    }
}

int main()
{
    int i,key;
    printf("How many numbers?\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers sequentially:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Now, enter the number which you want to search:\n");
    scanf("%d",&key);
    int x,low=0,high;
    high=n-1;
    x=binarySearch(a,key,low,high);
    if(x==1)
    {
        printf("The value is found.\n");
    }
    else
    {
        printf("The value is not found.\n");
    }
}

