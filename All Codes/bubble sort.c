#include<stdio.h>

int main()
{
    int n,i,j,temp;
    printf("How many numbers?\n");
    scanf("%d",&n);
    int a[n];
    printf("Now enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
           if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nSo, after ascending sorting the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
           if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nAnd after descending sorting the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
