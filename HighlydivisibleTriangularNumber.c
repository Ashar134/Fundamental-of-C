#include<stdio.h>
int main()
{
    int count2=0,sum=0,count=0,i=1;
    while(1)
    {
        sum=sum+i;
        for (int j=1;j<=sum;j++)
        {
          
            if(sum%j==0)
            {
                count++;
            }
        }
        if(count==10)
        {
            count2++;
            printf("%d\t is the triangular number\n",sum);
        }
        if(count2==5)
        {
            break;
        }
        i++;
        count=0;
    }
    printf("\nThese are the First five divisor");

    return 0;
}
