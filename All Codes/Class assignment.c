#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data1;
    int data2;
    struct node* next;
}Node;

 int main()
 {
     int i=1,n;
     Node *head, *temp;
     printf("How many Nodes?\n");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("\nPlease enter a positive integer.\n");
         exit(1);
     }
     else
     {
         head = (Node*)malloc(sizeof(Node));
         printf("\nEnter the two data for Node %d\n",i++);
         scanf("%d",&head->data1);
         scanf("%d",&head->data2);
         head->next = null;
         temp = head;
         while(i<=n)
         {
             temp->next = (Node*)malloc(sizeof(Node));
             temp = temp->next;
             printf("\nEnter the two data for Node %d\n",i++);
             scanf("%d",&temp->data1);
             scanf("%d",&temp->data2);
         }
         temp->next = null;
     }
     temp = head;
     int sum=0;
     while(temp!=null)
     {
         sum = sum+temp->data1+temp->data2;
         temp = temp->next;
     }
     printf("\nSo, the sum of all data = %d\n",sum);
     free(head);
 }
