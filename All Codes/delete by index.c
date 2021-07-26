#include<stdio.h>

int size;

void DeleteByIndex(int a[], int index)
{
    int i;
    for(i=index; i<(size-1); i++)
    {
        a[i]=a[i+1];
    }
    size--;
}

int main()
{
    printf("How many elements?\n");
    scanf("%d",&size);
    int a[size],i,index;
    printf("Now enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which index's value you want to delete?\n");
    scanf("%d",&index);
    DeleteByIndex(a,index);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
