#include<stdio.h>

#define size 5

int stack[size];
int tos=-1;

void push(int d)
{
    if(tos==size-1)
    {
        printf("Now, the Stack is full, we can't push the last value.\n");
    }
    else
    {
        tos++;
        stack[tos]=d;
    }
}

int pop()
{
    if(tos==-1)
    {
        printf("The Stack is empty.\n");
    }
    else
    {
        return stack[tos--];
    }

}

int main ()
{
    int i,x,option;
    while(1)
    {
        printf("Please enter your option:\n1.push\n2.pop\nEnter -1 to exit\n");
        scanf("%d",&option);
        if(option==-1)
        {
           break;
        }
        else
        {
            switch(option)
            {
                case 1:
                    printf("Please enter the Stack values for pushing:\n");
                    for(i=0;i<=size;i++)
                    {
                        scanf("%d",&x);
                        push(x);
                    }
                    break;
                case 2:
                    printf("After popping we can get %d\n",pop());
                    break;
                default:
                    printf("Please enter a valid value.\n");
            }
    }

        }

    return 0;
}


