#include<stdio.h>

int size;

void DeleteByValue(int a[], int value)
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
    int a[size],i,value;
    printf("Now enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Which value you want to delete?\n");
    scanf("%d",&value);
    DeleteByValue(a,value);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

