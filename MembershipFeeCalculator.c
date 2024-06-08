#include<stdio.h>
int main ()
{
    char membership;
    int age;

    printf("Enter the Age :");
    scanf("%d",&age);

    printf("If you are a Member m/n\n");
    scanf("%s",&membership);

    if (membership=='m')
    {
    
      if (age >=65)
      {
        printf("You have to Pay 5$");
      }
      else  
      {
        printf("You have to Payss 10$");
      }      
    }
else
    {
        printf("You have to Pay 20$");
    }

   
}
