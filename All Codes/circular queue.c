#include <stdio.h>

#define N 10

int q[N+1];
int front=0;
int rear=0;
int n=N+1;

void enqueue(int item)
{
    if((rear+1)%n==front)
    {
        printf("Queue is full!!\n");
    }
    else
    {
        q[rear%n]=item;
        rear=(rear+1)%n;
    }
}

int dequeue()
{

    int item;
    if(front==rear)
    {
       printf("Queue is empty.\n");
       return -1;
    }

    else
    {
        item=q[front];
        front=(front+1)%n;
    }
    return item;
}

void view()
{
    int i;
    if(front==rear)
    {
       printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue:\n");
        for(i=front;(i%n)<rear;i=(i+1)%n)
        {
            printf("%d  ",q[i]);
        }
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



