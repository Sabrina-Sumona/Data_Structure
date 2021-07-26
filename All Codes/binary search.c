#include<stdio.h>

int n;

void binarySearch(int a[], int key)
{
    int low=0,mid,high=(n-1);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%d is found.",key);
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
    printf("%d is not found.",key);
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
    binarySearch(a,key);
}
