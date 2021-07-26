#include<stdio.h>

int size;

void maxHeapify(int h[],int n,int i)
{
    int l,r,max,temp;
    l=2*i;
    r=(2*i)+1;
    if(l<=n && h[l]>h[i])
    {
       max=l;
    }
    else
    {
        max=i;
    }
    if(r<=n && h[r]>h[max])
    {
      max=r;
    }
    if(max!=i)
    {
        temp=h[i];
        h[i]=h[max];
        h[max]=temp;
        maxHeapify(h,n,max);
    }
}

void buildHeap(int h[],int n)
{
    int i=n/2;
    while(i>=1)
    {
        maxHeapify(h,n,i);
        i--;
    }
}

int main()
{
    int i,j,n;
    printf("How many numbers?\n");
    scanf("%d",&n);
    size=n+1;
    int h[size];
    printf("Now enter the numbers:\n");
    h[0]=-1;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&h[i]);
    }
    printf("\nSo, the numbers are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",h[i]);
    }
    buildHeap(h,n);
    printf("\nSo, the max heap:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",h[i]);
    }
}

