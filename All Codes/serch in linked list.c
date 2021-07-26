#include<stdio.h>
#include<stdlib.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

void search(Node *h,int d)
{
    while (h!=null)
    {
        if(h->data==d)
        {
            printf("The data is found");
            break;
        }
        else
        {
            h=h->next;
        }
    }
    if(h==null)
        printf("The data is not found");
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

     int d;
     printf("Enter the data which you want to search:\n");
     scanf("%d",&d);
     search(head,d);

     return 0;
 }



