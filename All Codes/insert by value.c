#include<stdio.h>

int size;

void InsertByValue(int a[], int value, int key)
{
    int index,i;
    for(i=0; i<size; i++)
    {
        if(a[i]==value)
            {
                index=i;
                break;
            }
    }
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
    int a[size],i,value,key;
    printf("Now enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which value you want to insert?\n");
    scanf("%d",&key);
    printf("You want to insert at which value's index?\n");
    scanf("%d",&value);
    InsertByValue(a,value,key);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
