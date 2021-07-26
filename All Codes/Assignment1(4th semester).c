#include<stdio.h>

int size;

void PrintValue(int a[])
{
    int i;
    printf("So the elements are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
}

int SearchByIndex(int a[], int index)
{
    return a[index];
}

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

void UpdateByIndex(int a[], int index, int key)
{
    a[index]=key;
}

void UpdateByValue(int a[], int value, int key)
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

void DeleteByIndex(int a[], int index)
{
    int i;
    for(i=index; i<(size-1); i++)
    {
        a[i]=a[i+1];
    }
    size--;
}

void DeleteByValue(int a[], int value)
{
    int index = SearchByValue(a,value);
    DeleteByIndex(a,index);
}

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

void InsertByValue(int a[], int value, int key)
{
    int index = SearchByValue(a,value);
    InsertByIndex(a,index,key);
}
int main()
{
    printf("How many elements?\n");
    scanf("%d",&size);
    int a[size],i,option,index,value,key;
    printf("Now enter the elements:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Please enter your option:\n1.Search any element by it's index,\n2.Search any element by it's value,\n3.Update any element by it's index,\n4.Update any element by any value,\n5.Delete any element by it's index,\n6.Delete any element by it's value,\n7.Insert any element at any index,\n8.Insert any element at any value,\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
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
            break;
        case 2:
            printf("Which value you want to search?\n");
            scanf("%d",&value);
            int index=SearchByValue(a,value);
            if(index==-1)
            {
                printf("The value is not found\n");
            }
            else
            {
                printf("The value is found at index %d\n",index);
            }
            break;
        case 3:
            printf("Which index's value you want to update?\n");
            scanf("%d",&index);
            printf("What is the new update value?\n");
            scanf("%d",&key);
            UpdateByIndex(a,index,key);
            PrintValue(a);
            break;
        case 4:
            printf("Which value you want to update?\n");
            scanf("%d",&value);
            printf("What is the new update value?\n");
            scanf("%d",&key);
            UpdateByValue(a,value,key);
            PrintValue(a);
            break;
        case 5:
            printf("Which index's value you want to delete?\n");
            scanf("%d",&index);
            DeleteByIndex(a,index);
            PrintValue(a);
            break;
        case 6:
            printf("Which value you want to delete?\n");
            scanf("%d",&value);
            DeleteByValue(a,value);
            PrintValue(a);
            break;
        case 7:
            printf("At which index you want to insert?\n");
            scanf("%d",&index);
            printf("Which value you want to insert?\n");
            scanf("%d",&key);
            InsertByIndex(a,index,key);
            PrintValue(a);
            break;
        case 8:
            printf("At which value you want to insert?\n");
            scanf("%d",&value);
            printf("Which value you want to insert?\n");
            scanf("%d",&key);
            InsertByValue(a,value,key);
            PrintValue(a);
            break;
        default:
            printf("Please enter a valid option.\n");
    }

    return 0;
}

