#include<stdio.h>

int size;

void InsertByIndex(int a[], int index, int key)
{
    int i;
    size++;
    for(i=(size-1); i>index; i--)
    {
        a[i]=a[i-1];
    }
    a[index]=key;
}

int main()
{
    printf("How many elements?\n");
    scanf("%d",&size);
    int a[size],i,index,key;
    printf("Now enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which value you want to insert?\n");
    scanf("%d",&key);
    printf("You want to insert at which index?\n");
    scanf("%d",&index);
    InsertByIndex(a,index,key);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
