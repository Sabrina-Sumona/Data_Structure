#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *deleteBeg (Node *h)
{
    return h->next;

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
     head=deleteBeg(head);
     printf("\nNow, after deleting the beginning data,\nthe values are:\n");
     printList(head);
     return 0;
 }




