#include<stdio.h>
#define null 0

typedef struct node
{
    int data;
    struct node *next;
}Node;

int main()
{
    Node *head,*temp1,*temp2,*temp3;
    head=(Node*)malloc(sizeof(Node));
    head->data=30;
    head->next=temp1;
    temp1=(Node*)malloc(sizeof(Node));
    temp1->data=50;
    temp1->next=temp2;
    temp2=(Node*)malloc(sizeof(Node));
    temp2->data=70;
    temp2->next=temp3;
    temp3=(Node*)malloc(sizeof(Node));
    temp3->data=90;
    temp3->next=null;
    printf("%d  ",head->data);
    printf("%d  ",temp1->data);
    printf("%d  ",temp2->data);
    printf("%d  ",temp3->data);
    return 0;

}



