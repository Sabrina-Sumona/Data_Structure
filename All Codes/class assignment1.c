#include<stdio.h>
#include<stdlib.h>

#define null 0

typedef struct node
{
    char data;
    struct node* left;
    struct node* right;
}Node;

Node *createNode(char d)
{
    Node *newNode;
    newNode = (Node*)malloc(sizeof(Node));
    if(newNode == null)
    {
        printf("Error! Could not open new node.");
        exit(1);
    }
    newNode->data = d;
    newNode->right = null;
    newNode->left = null;
    return newNode;
}

void addLeftChild(Node *node, Node *child)
{
    node->left = child;
}

void addRightChild(Node *node, Node *child)
{
    node->right = child;
}

Node* createTree()
{
    Node *a = createNode('A');
    Node *b = createNode('B');
    Node *c = createNode('C');
    Node *d = createNode('D');
    Node *e = createNode('E');
    Node *g = createNode('G');
    Node *h = createNode('H');
    Node *k = createNode('K');
    Node *l = createNode('L');
    Node *m = createNode('M');
    Node *n = createNode('N');
    Node *p = createNode('P');
    Node *q = createNode('Q');
    Node *s = createNode('S');
    Node *t = createNode('T');
    addLeftChild(a, b);
    addRightChild(a, c);
    addLeftChild(b, d);
    addRightChild(b, e);
    addLeftChild(c, g);
    addRightChild(c, h);
    addLeftChild(d, k);
    addRightChild(d, l);
    addLeftChild(e, m);
    addRightChild(e, n);
    addLeftChild(h, p);
    addRightChild(h, q);
    addLeftChild(m, s);
    addRightChild(m, t);
    return a;
}

void preOrder(Node *node)
{
    printf("%c  ",node->data);
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
    printf("%c  ",node->data);
}

void inOrder(Node *node)
{
    if(node->left!=null)
    {
        inOrder(node->left);
    }
    printf("%c  ",node->data);
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

