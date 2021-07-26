#include <stdio.h>

#define size 10

int q[size];
int front=0;
int rear=0;

void enqueue(int item)
{
    if(rear<(size-1))
    {
        q[rear]=item;
        rear++;
    }
    else
        printf("Queue is full!!\n");
}

int dequeue()
{

    int item;
    if(front==rear)
        printf("Queue is empty.\n");
    else
    {
        item=q[front];
        front++;
    }
    return item;
}

void view()
{
    int i;
    printf("Queue:\n");
    for(i=front;i<rear;i++)
    {
       printf("%d  ",q[i]);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    view();
    printf("\nAfter dequeue %d,\n",dequeue());
    view();
    printf("\nAfter dequeue %d,\n",dequeue());
    view();
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    printf("\nFinally, after some enqueues,\n");
    view();
}


