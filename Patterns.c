#include<stdio.h>
int main ()
{
int i,j,k,m;
int space;
char alphabet='A';
   
    for ( i = 1; i <=5; ++i)
{
        
        for ( j = 1; j <=i; ++j)
        {
            printf("%d ",i);
      
        }
         printf("\n");
    }
printf("--------Pattern 2--------\n\n");

    for ( i = 1; i <= 5; i++)
    {
       for ( j =i; j < 5; j++)
       {
          printf(" ");
       }
       for ( k = 1; k <= i; k++)
       {
          printf("%d",k);
       }
       printf("\n");
    }   
 printf("--------Pattern 3--------\n\n");

    for ( i = 1; i <=5; ++i)
{
        
        for ( j = 1; j <=i; ++j)
        {
            printf("%c",alphabet+j-1);
      
        }
         printf("\n");
    }
printf("--------Pattern 4--------\n\n");

     for( i=1 ; i<=5 ; i++)
    {
		    for(j=1;j<=5-i;j++)
          {
                        printf(" ");
		    }
          int m=1;
		    for(k=1;k<=i;k++)
          {
		        printf("%d",m++);
		    }
          m=m-2;
          for ( int l = 1; l < i; l++)
          {
           printf("%d",m--);
          }
          
		printf("\n");
	    }

printf("--------Pattern 5--------\n\n");


 for ( i = 6; i >=1; i--)
 {
   for ( k = 1; k <= 6-i; k++)
   {
      printf(" ");
   }
   for ( j = 1; j < 2+i-1; j++)
   {
       printf("%c ",alphabet+j-1);
   }
   printf("\n");
 }

printf("--------Pattern 6--------\n\n");

 for ( i = 0; i <= 3; i++)
   {
      for ( j = -3; j <= 3; j++)
      {
         if (-i<j && j<i)
         {
            printf(" ");
         }
         else
         printf("*");
      }
      printf("\n");

}
printf("--------Pattern 7--------\n\n");

     for (int i = 1; i <= 8; i++)
     {
      for (int j = 1; j <= 6; j++)
      {
         if ((i==1||i==(7-1)||j==(7-i)||j==0))
         {
            
            printf(" *");
         }
         else
         printf("  ");
      }
      printf("\n");
}

printf("--------Pattern 8--------\n\n");

for (int i = 1; i <= 5; i++)
   {
      for (int j = 1; j <= 5; j++)
      {
         if ((i==1||i==5||j==1||j==5))
         {
            printf("*");
         }
         else
         printf(" ");
      }
      printf("\n");
   }

}