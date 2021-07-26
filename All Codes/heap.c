#include<stdio.h>

void maxHeapify(int h[], int size, int i)
{
    int l, r, largest, temp;
    l = 2*i;
    r = 2*i + 1;
    if(l<=size && h[l]>h[i])
        largest = l;
    else
        largest = i;
    if(r<=size && h[r]>h[largest])
        largest = r;
    if(largest != i)
    {
        temp = h[i];
        h[i] = h[largest];
        h[largest] = temp;
        maxHeapify(h, size, largest);
    }
}

void buildHeap(int h[], int size)
{
    int i = size/2;
    while(i>=1)
    {
        maxHeapify(h,size,i);
        i--;
    }
}

int main()
{
    int heap[]= {-1,11,23,4,55,66,7,88,2,4,100,8,120},n=12;
    int i;
    printf("\nHeap:");
    for(i=1;i<=n;i++)
        printf("%d  ",heap[i]);
    buildHeap(heap, n);
    printf("\nHeap:");
    for(i=1;i<=n;i++)
        printf("%d  ",heap[i]);

}
