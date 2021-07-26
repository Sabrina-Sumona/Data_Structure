#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

void deleteMid (Node *h,int x)
{
    while(h->next->data!=x)
    {
        h=h->next;
    }
    h->next=h->next->next;
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
     int x;
     printf("\nEnter the data which you want to delete from the middle:\n");
     scanf("%d",&x);
     deleteMid(head,x);
     printf("Now, the values are:\n");
     printList(head);
     return 0;
 }




