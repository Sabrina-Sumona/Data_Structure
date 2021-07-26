#include<stdio.h>

int main()
{
    int sum=0,n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=2;i<=(2*n);i+=2)
    {
        sum+=i;
    }
    printf("So the sum of the series = %d ",sum);
    return 0;
}

