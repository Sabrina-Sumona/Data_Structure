#include<stdio.h>

int main()
{
    int sum=0,n,i=2,k;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int a[n];
    for(k=0;k<n;k++)
    {
        a[k]=i;
        i=i+2;
    }
    for(k=0;k<n;k++)
    {
        sum=sum+a[k];
    }
    printf("So the sum of the series = %d ",sum);
    return 0;
}


