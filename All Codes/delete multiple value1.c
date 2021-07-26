#include<stdio.h>

int size;

void DeleteMultipleValue(int a[], int value)
{
    int index,i,j;
    for(i=0; i<size; i++)
    {
        if(a[i]==value)
            {
                index=i;
                for(j=index; j<(size-1); j++)
                {
                    a[j]=a[j+1];
                }
                size--;
                i--;
            }
    }
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
    DeleteMultipleValue(a,value);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


