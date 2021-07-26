#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Now enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("So, the elements of the array :");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    return 0;
}


