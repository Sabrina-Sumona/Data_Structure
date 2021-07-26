#include<stdio.h>

typedef struct number
{
    int x;
    int y;
}Number;

int main()
{
    Number *n;
    n=(Number*)malloc(sizeof(Number));
    n->x=10;
    n->y=15;
    printf("x = %d and y = %d",n->x,n->y);
    return 0;
}

