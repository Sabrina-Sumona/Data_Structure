#include<stdio.h>

int n;

void insertionSort(int a[])
{
    int temp,i,j;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }

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
    insertionSort(a);
    printf("\nAnd after sorting in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

