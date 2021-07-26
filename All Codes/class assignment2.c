#include<stdio.h>

int size;

void minHeapify(float h[], int n, int i)
{
    int l,r,min;
    float temp;
    l=2*i;
    r=(2*i)+1;
    if(l<=n && h[l]<h[i])
    {
        min=l;
    }
    else
    {
        min=i;
    }
    if(r<=n && h[r]<h[min])
    {
      min=r;
    }
    if(min!=i)
    {
        temp=h[i];
        h[i]=h[min];
        h[min]=temp;
        minHeapify(h,n,min);
    }
}

void buildHeap(float h[],int n)
{
    int i=n/2;
    while(i>=1)
    {
        minHeapify(h,n,i);
        i--;
    }
}

int main()
{
    int i,j,n;
    float sum=0.0;
    printf("How many numbers?\n");
    scanf("%d",&n);
    size=n+1;
    float h[size];
    printf("Now enter the numbers:\n");
    h[0]=-1.0;
    for(i=1;i<=n;i++)
    {
        scanf("%f",&h[i]);
    }
    printf("\nSo, the numbers are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",h[i]);
    }
    buildHeap(h,n);
    printf("\nSo, the min heap:\n");
    for(i=1;i<=n;i++)
    {
        printf("%.2f ",h[i]);
    }
    for(i=1;i<=(n/2);i++)
    {
        sum=sum+h[i];
    }
    printf("\nSo, the sum of all nodes without leaf nodes = %f\n",sum);
}

