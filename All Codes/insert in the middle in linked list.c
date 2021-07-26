#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

void insertMid (Node *h,int d,int x)
{
    Node *t;
    t = (Node*)malloc(sizeof(Node));
    t->data = d;
    while(h->data!=x)
    {
        h=h->next;
    }
    t->next=h->next;
    h->next=t;
}

 void printList(Node *h)
 {
     while(h!=null)
     {
         printf("%d  ",h->data);
         h = h->next;
     }
 }

 int main()
 {
     int i=1,n;
     Node *head, *temp;
     printf("How many Nodes?\n");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("Please enter a positive integer.\n");
         exit(1);
     }
     else
     {
         head = (Node*)malloc(sizeof(Node));
         printf("Enter data for Node %d\n",i++);
         scanf("%d",&head->data);
         temp = head;
         while(i<=n)
         {
             temp->next = (Node*)malloc(sizeof(Node));
             temp = temp->next;
             printf("Enter data for Node %d\n",i++);
             scanf("%d",&temp->data);
         }
         temp->next = null;
     }
     printf("The values are:\n");
     printList(head);
     int d,x;
     printf("\nEnter the data which you want to insert at the middle:\n");
     scanf("%d",&d);
     printf("Now enter the data after which you want to insert the new data:\n");
     scanf("%d",&x);
     insertMid(head,d,x);
     printf("Now, the values are:\n");
     printList(head);
     return 0;
 }



