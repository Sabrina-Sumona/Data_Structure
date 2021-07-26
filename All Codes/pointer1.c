#include<stdio.h>

int main ()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *p;
    p = &n;
    printf("p = %d\n",p);
    printf("*p = %d\n",*p);
    printf("n = %d\n",n);
    printf("&n = %d\n",&n);


    int i,m;
    printf("How many other elements you need?\n");
    scanf("%d",&m);
    p=(int*)malloc(m*sizeof(int));
    printf("Now enter the other values:\n");
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
