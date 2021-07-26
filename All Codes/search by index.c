#include<stdio.h>

int size;


int SearchByIndex(int a[], int index)
{
    return a[index];
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
    printf("Which index's value you want to search?\n");
    scanf("%d",&index);
    if(index>=0&&index<size)
    {
        int value=SearchByIndex(a,index);
        printf("So the value of index %d = %d\n",index,value);
    }
    else
    {
        printf("Please enter a valid index.");
    }
    return 0;
}


