#include<stdio.h>
#include<string.h>

typedef struct student
{
    char name[20];
    char bloodgroup[3];
    int age;
    char mobile[11];
}myfriends;

int main()
{
    int i,m;
    printf("How many friends do you have?\n");
    scanf("%d",&m);
    myfriends f[m];

    printf("Enter your friends's names:\n");
    for(i=0;i<m;i++)
    {
        scanf("%s",f[i].name);
    }

    printf("Now enter your friends's blood groups:\n");
    for(i=0;i<m;i++)
    {
        scanf("%s",f[i].bloodgroup);
    }

    printf("Now enter your friends's ages:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&f[i].age);
    }

    printf("Now enter your friends's mobile numbers:\n");
    for(i=0;i<m;i++)
    {
        scanf("%s",f[i].mobile);
    }

    for(i=0;i<m;i++)
    {
        printf("For friend %d name = %s, blood group = %s, age = %d, mobile = %s\n",(i+1),f[i].name,f[i].bloodgroup,f[i].age,f[i].mobile);
    }

    return 0;
}

