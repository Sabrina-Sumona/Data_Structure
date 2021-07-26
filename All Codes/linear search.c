#include<stdio.h>

int n;

void linearSearch(int a[], int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is found.",key);
            return;
        }
    }
    printf("%d is not found.",key);
}

int main()
{
    int i,key;
    printf("How many numbers?\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Now, enter the number which you want to search:\n");
    scanf("%d",&key);
    linearSearch(a,key);
}

