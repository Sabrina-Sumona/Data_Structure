#include<stdio.h>

int size;

void minHeapify(int h[],int n,int i)
{
    int l,r,min,temp;
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

void buildHeap(int h[],int n)
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
    printf("\nSo, the min heap:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",h[i]);
    }
    printf("\nNow enter the index of the node:\n");
    scanf("%d",&i);
    printf("So, %d is the value of index %d\n",h[i],i);
    j=i/2;
    printf("So, %d is the parent of %d\n",h[j],h[i]);
    j=(j*2)+1;
    printf("So, %d is the sibling of %d\n",h[j],h[i]);
    j=i*2;
    printf("So, %d is the left child of %d\n",h[j],h[i]);
    j=j+1;
    printf("So, %d is the right child of %d\n",h[j],h[i]);

}

