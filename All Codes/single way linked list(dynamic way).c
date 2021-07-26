#include<stdio.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

 int main()
 {
     int i,n;
     Node *head, *temp;
     printf("How many Nodes?\n");
     scanf("%d",&n);
     head = (Node*)malloc(sizeof(Node));
     printf("Enter data for the Nodes:\n");
     scanf("%d",&head->data);
     temp = head;
     for(i=1;i<n;i++)
     {
        temp->next = (Node*)malloc(sizeof(Node));
        temp = temp->next;
        scanf("%d",&temp->data);
     }
     temp->next = null;
     printf("The values are:\n");
     temp = head;
     while(temp!=null)
     {
         printf("%d  ",temp->data);
         temp = temp->next;
     }
     return 0;
 }
