#include<stdio.h>

int stack[100];
int tos=-1;
int size=20;

void push(int d)
{
    if(tos==(size-1))
    {
        printf("The Stack is full.");
    }
    else
    {
        tos++;
        stack[tos]=d;
    }
}

int pop()
{
    if(tos==-1)
    {
        printf("The Stack is empty.");
    }
    else
    {
        return stack[tos--];
    }

}

int main ()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());

    return 0;
}

