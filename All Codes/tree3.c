#include<stdio.h>
#include<stdlib.h>

#define null 0

typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
}Node;

Node* createTree()
{
    Node *temp;
    int d;
    printf("Enter data for the node (Enter 0 if there is no node):\n");
    scanf("%d",&d);
    if(d==0)
    {
        return null;
    }
    temp=(Node*)malloc(sizeof(Node));
    temp->data=d;
    printf("Left child of %d:\n",d);
    temp->left=createTree();
    printf("Right child of %d:\n",d);
    temp->right=createTree();
    return temp;
}

void preOrder(Node *node)
{
    printf("%d  ",node->data);
    if(node->left!=null)
    {
        preOrder(node->left);
    }
    if(node->right!=null)
    {
        preOrder(node->right);
    }
}

void postOrder(Node *node)
{
    if(node->left!=null)
    {
        postOrder(node->left);
    }
    if(node->right!=null)
    {
        postOrder(node->right);
    }
    printf("%d  ",node->data);
}

void inOrder(Node *node)
{
    if(node->left!=null)
    {
        inOrder(node->left);
    }
    printf("%d  ",node->data);
    if(node->right!=null)
    {
        inOrder(node->right);
    }
}

int main ()
{
    Node *root;
    root = createTree();
    printf("The pre-order traverse:\n");
    preOrder(root);
    printf("\nThe post-order traverse:\n");
    postOrder(root);
    printf("\nThe in-order traverse:\n");
    inOrder(root);
    return 0;
}
