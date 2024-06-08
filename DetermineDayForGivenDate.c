#include<stdio.h>
#define total_days 7
int main ()
{
    int date;

    printf("-----------------------\n");
    printf("| DAY FINDING CALENDAR |\n");
    printf("-----------------------\n");

    printf("Enter the Date for the month of may :");
    scanf("%d",&date);

    if (date <= 0 || date > 31)
    {
        printf("Invalid input\n");

    }else if (date % total_days ==1)
    {
        printf("On day %d, It's Monday\n",date);

    }else if (date %total_days==2)
    {
        printf("On day %d ,It's Tuesday\n",date);

    }else if (date %total_days==3)
    {
       printf("On day %d ,It's Wednesday\n",date);

    }else if (date %total_days==4)
    {
       printf("On day %d ,It's Thursday\n",date);

    }else if (date %total_days==5)
    {
       printf("On day %d ,It's Friday\n",date);

    }else if (date %total_days==6)
    {
       printf("On day %d ,It's Saturday\n",date);

    }else if (date %total_days==7)
    {
       printf("On day %d ,It's Sunday\n",date);
    }

}