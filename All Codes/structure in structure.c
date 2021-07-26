#include<stdio.h>
#include<string.h>

typedef struct student
{
    struct DOB
    {
        int year;
        int month;
        int date;
    };
    char name[20];
}Student;

int main()
{
    Student s1;
    struct DOB s2;


    strcpy(s1.name,"Sabrina");
    s2.year=2000;
    s2.month=3;
    s2.date=1;

    printf("Name = %s, birth:  year = %d, month = %d, date = %d\n",s1.name,s2.year,s2.month,s2.date);

    return 0;
}

