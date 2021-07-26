#include<stdio.h>
int n;
void checkConnection(int g[n][n])
{
    int i,j;
    printf("Which nodes connection you want to check?\nEnter the row and column numbers:\n");
    scanf("%d%d",&i,&j);
    if(g[i][j]==1)
    {
        printf("Connected\n");
    }
    else
    {
        printf("Not connected\n");
    }
}

int main ()
{
    int i,j;
    printf("How many nodes?\n");
    scanf("%d",&n);
    int g[n][n];
    printf("Now enter 1 if the nodes are connected else enter 0 according to the nodes:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&g[i][j]);
        }
    }
    char c='A';
    printf("    ",c);
    for(i=0;i<n;i++)
    {
        printf("%c  ",c);
        c++;
    }
    printf("\n");
    printf("\n");
    c='A';
    for(i=0;i<n;i++)
    {
        printf("%c ",c);
        c++;
        for(j=0;j<n;j++)
        {
           printf("  %d",g[i][j]);
        }
        printf("\n");
    }

    checkConnection(g);

    return 0;
}
