#include<stdio.h>

int size;


void UpdateByIndex(int a[], int index,int key)
{
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
    printf("Which index's value you want to update?\n");
    scanf("%d",&index);
    printf("What is the new value?\n");
    scanf("%d",&key);
    UpdateByIndex(a,index,key);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


