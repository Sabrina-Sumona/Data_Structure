#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

void insertEnd (Node *h,int d)
{
    Node *t;
    t = (Node*)malloc(sizeof(Node));
    t->data = d;
    while (h->next!=null)
    {
         h=h->next;
    }
    h->next=t;
    t->next=null;

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
     int d;
     printf("\nEnter the data which you want to insert at the end:\n");
     scanf("%d",&d);
     insertEnd(head,d);
     printf("Now, the values are:\n");
     printList(head);
     return 0;
 }




