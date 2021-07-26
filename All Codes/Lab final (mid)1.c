# include <stdio.h>

    struct student
    {
        int ct[4];
    };
    int main ()
    {
        struct student std[2];
        int i,j,min;
        float avg=0.00;

        for(i=0;i<2;i++)
        {
           printf("For the student %d,\nEnter the 4 ct marks one by one:\n",(i+1));
            scanf("%d",&std[i].ct[0]);
            scanf("%d",&std[i].ct[1]);
            scanf("%d",&std[i].ct[2]);
            scanf("%d",&std[i].ct[3]);
        }


        for(i=0;i<2;i++)
        {
            min=std[i].ct[0];
            for(j=0;j<4;j++)

            {
                if (min>std[i].ct[j])
                {
                    min=std[i].ct[j];

                }
            }
            avg=((float)(std[i].ct[0]+std[i].ct[1]+std[i].ct[2]+std[i].ct[3]-min))/3;
            printf ("The average mark for student %d = %.2f\n",(i+1),avg);
        }


        return 0;
    }

