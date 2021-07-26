#include<stdio.h>

int main()
{
    int a[] = {15,9,-1,-10,12,4,17,11},n=8,i;
    printf("\nBefore Sorting: ");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    mergeSort(a,0,n-1);
    printf("\nAfter Sorting: ");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}
void mergeSort(int a[],int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[], int l, int m, int h)
{
    int i,j,k,n1,n2;
    n1=m-l+1;
    n2=h-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+1+j];
    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            a[k++] = L[i++];
        else
            a[k++]=R[j++];
    }
    while(i<n1)
        a[k++]=L[i++];
    while(j<n2)
        a[k++]=R[j++];
}
