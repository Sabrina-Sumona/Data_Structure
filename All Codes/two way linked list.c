#include<stdio.h>
#include<stdlib.h>

#define null 0

typedef struct node
{
    int data;
    struct node* next;
    struct node* prev;
}Node;

 void printForward(Node *h)
 {
     while(h!=null)
     {
         printf("%d  ",h->data);
         h = h->next;
     }
     printf("\n");
 }

 void printBackward(Node *t)
 {
     while(t!=null)
     {
         printf("%d  ",t->data);
         t = t->prev;
     }
     printf("\n");
 }

Node *insertBeg(int d, Node *h)
{
    Node *t;
    t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->prev = null;
    t->next = h;
    h->prev = t;
    printf("\nSuccessful.\n");
    return t;
}

void insertMid(int d, int k, Node *h)
{
    Node *t;
    t= (Node*)malloc(sizeof(Node));
    t->data = d;
    while(h->data != k)
    {
        h = h->next;
    }
    h->next->prev = t;
    t->next = h->next;
    t->prev =h;
    h->next = t;
    printf("\nSuccessful.\n");
}

Node* insertEnd(int d, Node *t)
{
    Node *temp;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->prev = t;
    temp->next = null;
    t->next = temp;
    printf("\nSuccessful.\n");
    return temp;
}

Node *deleteBeg (Node *h)
{
    h->next->prev = null;
    printf("\nSuccessful.\n");
    return h->next;

}

void deleteMid (Node *h,int x)
{
    while(h->next->data!=x)
    {
        h=h->next;
    }
    h->next=h->next->next;
    h->next->next->prev=h;
    printf("\nSuccessful.\n");
}

Node* deleteEnd (Node *t)
{
    t->prev->next=null;
    printf("\nSuccessful.\n");
    return t->prev;

}

 int main()
 {
     int d,i=1,n;
     Node *head, *tail, *temp;
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
         printf("\nEnter data for Node %d\n",i++);
         scanf("%d",&head->data);
         head->prev = null;
         tail = head;
         temp = head;
         while(i<=n)
         {
             temp->next = (Node*)malloc(sizeof(Node));
             temp = temp->next;
             printf("\nEnter data for Node %d\n",i++);
             scanf("%d",&temp->data);
             temp->prev = tail;
             tail = temp;
         }
         temp->next = null;
     }
     temp = head;
     int option,k;
     while(1)
     {
        printf("\nEnter your option:\n1.print the list from forward\n2.print the list from backward\n3.insert data at the beginning\n4.insert data at middle\n5.insert data at the end\n6.delete data from the beginning\n7.delete data from the middle\n8.delete data from the end\nEnter -1 to exit)\n");
        scanf("%d",&option);
        if(option==-1)
            break;
        else
        {
            switch(option)
            {
                 case 1:
                     printf("\nSo, the data from forward are:\n");
                     printForward(head);
                     break;
                 case 2:
                     printf("\nSo, the data from backward are:\n");
                     printBackward(tail);
                     break;
                 case 3:
                    printf("\nEnter the data you want to insert at the beginning:\n");
                    scanf("%d",&d);
                    head = insertBeg(d,head);
                    break;
                 case 4:
                    printf("\nEnter the data you want to insert:\n");
                    scanf("%d",&d);
                    printf("\nEnter the data after which you want to insert:\n");
                    scanf("%d",&k);
                    insertMid(d,k,head);
                    break;
                 case 5:
                    printf("\nEnter the data you want to insert at the end:\n");
                    scanf("%d",&d);
                    tail = insertEnd(d,tail);
                    break;
                 case 6:
                    head=deleteBeg(head);
                    break;
                 case 7:
                    printf("\nEnter the data which you want to delete from the middle:\n");
                    scanf("%d",&k);
                    deleteMid(head,k);
                    break;
                 case 8:
                    tail = deleteEnd(tail);
                    break;
                 default:
                    printf("\nPlease enter a valid option.\n");
            }
        }
     }
     free(head);
 }
