#include<stdio.h>

int n;

void mergeSort(float a[],int low, int high)
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

void merge(float a[], int l, int m, int h)
{
    int i,j,k,n1,n2;
    n1=(m-l)+1;
    n2=h-m;

    float L[n1],R[n2];

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
        if(L[i]<=R[j])
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

void binarySearch(float a[], float key)
{
    int low=0,mid,high=(n-1);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%f is found.",key);
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
    printf("%f is not found.",key);
}

int main()
{
    int i,j;
    float key;
    printf("How many numbers?\n");
    scanf("%d",&n);
    float a[n];
    printf("Now enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("\nSo, the numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%f ",a[i]);
    }
    int low=0,high;
    high=n-1;
    mergeSort(a,low,high);
    printf("\nAnd after sorting in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%f ",a[i]);
    }
    printf("\nNow, enter the number which you want to search:\n");
    scanf("%f",&key);
    binarySearch(a,key);
}

