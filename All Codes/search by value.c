#include<stdio.h>

int size;


int SearchByValue(int a[], int value)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(a[i]==value)
            {
                return i;
            }
    }
    return -1;
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
    printf("Which value you want to search?\n");
    scanf("%d",&value);
    int index=SearchByValue(a,value);
    if(index==-1)
    {
        printf("The value %d is not found.",value);
    }
    else
    {
        printf("The value %d is found at index %d.",value,index);
    }

    return 0;
}



