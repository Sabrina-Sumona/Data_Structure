#include<stdio.h>

int n;

void quickSort(int a[],int l, int r)
{
    int p;
    if(l<r)
    {
        p=Partiton(a,l,r);
        quickSort(a,l,(p-1));
        quickSort(a,(p+1),r);
    }
}

int Partiton(int a[],int l, int r)
{
    int x,i,j,temp;
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

int main()
{
    int i,j,temp;
    printf("How many numbers?\n");
    scanf("%d",&n);
    int a[n];
    printf("Now enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nSo, the numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int l=0,r;
    r=n-1;
    quickSort(a,l,r);
    printf("\nAnd after sorting in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}


