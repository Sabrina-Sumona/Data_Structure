#include<stdio.h>

int size;


void UpdateByIndex(int a[], int value,int key)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i]==value)
            {
                a[i]=key;
                break;
            }
    }
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
    printf("Which value you want to update?\n");
    scanf("%d",&value);
    printf("What is the new value?\n");
    scanf("%d",&key);
    UpdateByIndex(a,value,key);
    printf("So the new series of elements:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}



