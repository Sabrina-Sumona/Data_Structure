#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    char bloodgroup[3];
    int age;
    char mobile[11];
};

int main()
{
    struct student s1,s2;

    strcpy(s1.name,"Sabrina");
    strcpy(s1.bloodgroup,"A+");
    s1.age=21;
    strcpy(s1.mobile,"01911223344");

    strcpy(s2.name,"Naorin");
    strcpy(s2.bloodgroup,"B+");
    s2.age=22;
    strcpy(s2.mobile,"01944332211");

    printf("For student1 name = %s, blood group = %s, age = %d, mobile = %s\n",s1.name,s1.bloodgroup,s1.age,s1.mobile);
    printf("For student2 name = %s, blood group = %s, age = %d, mobile = %s\n",s2.name,s2.bloodgroup,s2.age,s2.mobile);

    return 0;
}
