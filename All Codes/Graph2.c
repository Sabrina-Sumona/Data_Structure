#include<stdio.h>
#include<stdlib.h>
#define null 0
typedef struct node
{
    int data;
    struct node* next;
}Node;
struct AdjList
{
    Node *head;
};
struct Graph
{
    int V;
    struct AdjList* array;
};
Node* createNode(int d)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = d;
    newNode->next = null;
    return newNode;
}
struct Graph* createGraph(int v)
{
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = v;
    graph->array = (struct AdjList*)malloc(v * sizeof(struct AdjList));
    int i;
    for(i=0;i<v;i++)
        graph->array[i].head = null;
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest)
{
    Node* newNode = createNode(dest);
    newNode ->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = createNode(src);
    newNode ->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void printGraph(struct Graph* graph)
{
    int v;
    for(v = 0; v<graph->V; v++)
    {
        Node* temp = graph->array[v].head;
        printf("\nAdjacency List of vertex %d\n",v);
        while(temp)
        {
            printf("-> %d",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    int v = 5;
    struct Graph* graph = createGraph(v);
    addEdge(graph, 0,1);
    addEdge(graph, 0,4);
    addEdge(graph, 1,2);
    addEdge(graph, 2,3);
}
