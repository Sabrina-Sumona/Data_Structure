#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    float data;
    struct node* next;
}Node;

 int main()
 {
     int i=1,n;
     Node *head, *temp;
     printf("Enter the value of n:\n");
     scanf("%d",&n);
     if(n<=0)
     {
         printf("\nPlease enter a positive integer.\n");
         exit(1);
     }
     else
     {
         head = (Node*)malloc(sizeof(Node));
         printf("\nEnter the floating point number for Node %d\n",i++);
         scanf("%f",&head->data);
         head->next = null;
         temp = head;
         while(i<=n)
         {
             temp->next = (Node*)malloc(sizeof(Node));
             temp = temp->next;
             printf("\nEnter the floating point number for Node %d\n",i++);
             scanf("%f",&temp->data);
         }
         temp->next = null;
     }
     temp = head;
     float sum=0.00;
     while(temp!=null)
     {
         sum = sum+temp->data;
         temp = temp->next;
     }
     printf("\nSo, the sum of all floating point numbers = %f\n",sum);
     free(head);
 }
