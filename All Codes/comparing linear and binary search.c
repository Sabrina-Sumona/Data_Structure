#include<stdio.h>

int n=100;

void linearSearch(int a[], int key)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        c++;
        if(a[i]==key)
        {
            printf("\n%d is found after %d iteration.",key,c);
            return;
        }
    }
    printf("\n%d is not found.",key);
}

void binarySearch(int a[], int key)
{
    int low=0,mid,high=(n-1),c=0;
    while(low<=high)
    {
        c++;
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("\n%d is found after %d iteration.",key,c);
            return;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("\n%d is not found.",key);
}

int main()
{
    int i,key;
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=(2*i)+3;
    }
    printf("The numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("\nNow, enter the number which you want to search:\n");
    scanf("%d",&key);
    linearSearch(a,key);
    binarySearch(a,key);
}


