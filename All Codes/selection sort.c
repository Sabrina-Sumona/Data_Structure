#include<stdio.h>

int main()
{
    int n,i,j,temp,m;
    printf("How many numbers?\n");
    scanf("%d",&n);
    int a[n];
    printf("Now enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<(n-1);i++)
    {
       m = i;
        for(j=(i+1);j<n;j++)
        {
           if(a[j]<a[m])
            {
                m = j;
            }
        }
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
    printf("\nSo, after ascending sorting the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<(n-1);i++)
    {
       m = i;
        for(j=(i+1);j<n;j++)
        {
           if(a[j]>a[m])
            {
                m = j;
            }
        }
        temp=a[i];
        a[i]=a[m];
        a[m]=temp;
    }
    printf("\nAnd after descending sorting the numbers:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

