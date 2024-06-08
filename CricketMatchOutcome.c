#include<stdio.h>
int main ()
{
    int score,wicket,y;

    printf("Enter the Pakistan Scores :");
    scanf("%d",&score);
    
    printf("Enter the Wickets :");
    scanf("%d",&wicket);

    if (score>300 )
    {
        y=300-score;
       printf("Pakistan win the match by %d wicket",wicket);

    }
    else if (score < 300)
    {
      y=300-score;
      printf("Pakistan lose the match by remaining runs %d with %d wickets",y,wicket);

    }
    else

    printf("Match is draw");
    

}