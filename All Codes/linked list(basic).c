#include<stdio.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    Node n1,n2,n3;
    n1.data=10;
    n1.next=&n2;
    n2.data=20;
    n2.next=&n3;
    n3.data=30;
    n3.next=null;
    Node *head,*temp;
    head=&n1;
    temp=head;
    while(temp!=null)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    return 0;

}


