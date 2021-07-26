#include<stdio.h>

void quickSort(char a[],int l, int r)
{
    int p;
    if(l<r)
    {
        p=Partiton(a,l,r);
        quickSort(a,l,(p-1));
        quickSort(a,(p+1),r);
    }
}

int Partiton(char a[],int l, int r)
{
    int i,j;
    char x,temp;
    x=a[r];
    i=(l-1);
    for(j=l;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[j];
    a[j]=temp;
    return (i+1);
}

void binarySearch(char a[], char key)
{
    int low=0,mid,high=4;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%c is found.",key);
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
    printf("%c is not found.",key);
}

int main()
{
    int i,j;
    char key;
    char a[]={'e','b','c','d','a'};
    printf("So, the characters are:\n");
    for(i=0;i<5;i++)
    {
        printf("%c ",a[i]);
    }
    int l=0,r;
    r=4;
    quickSort(a,l,r);
    printf("\nAnd after sorting in ascending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%c ",a[i]);
    }
    printf("\nNow, enter the character which you want to search:\n");
    key=getchar();
    binarySearch(a,key);
}

