#include<stdio.h>

int n;

void mergeSort(int a[],int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,(mid+1),high);
        merge(a,low,mid,high);
    }
}

void merge(int a[], int l, int m, int h)
{
    int i,j,k,n1,n2;
    n1=(m-l)+1;
    n2=h-m;

    int L[n1],R[n2];

    for(i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }

    for(j=0;j<n2;j++)
    {
        R[j]=a[m+1+j];
    }

    i=0;j=0;k=l;

    while(i<n1 && j<n2)
    {
        if(L[i]>=R[j])
        {
            a[k++] = L[i++];
        }
        else
        {
            a[k++]=R[j++];
        }
    }
    while(i<n1)
    {
        a[k++]=L[i++];
    }

    while(j<n2)
    {
       a[k++]=R[j++];
    }
}

int main()
{
    int i,j;
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
    int low=0,high;
    high=n-1;
    mergeSort(a,low,high);
    printf("\nAnd after sorting in descending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

