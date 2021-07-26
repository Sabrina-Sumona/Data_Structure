#include<stdio.h>

int main ()
{
    int *p;
    int i,m;
    printf("How many elements you need?\n");
    scanf("%d",&m);
    p=(int*)malloc(m*sizeof(int));
    printf("Now enter the values:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",(p+i));
    }
    printf("So the other values are:\n");
    for(i=0;i<m;i++)
    {
       printf("%d  ",*(p+i));
    }

    return 0;
}

