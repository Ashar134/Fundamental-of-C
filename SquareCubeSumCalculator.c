#include<stdio.h>
#include<math.h>
int main ()
{
    int arr[60];
    int i,j,k,temp=0,sum=0;
    
    printf("Following are the square of from 0 to 20 \n");
    for ( i = 0; i < 20; i++)
    {
        temp=i*i;
        printf("%d\t",temp);
    }
     printf("\n");
      printf("Following are the cube of from 20 to 40 \n");
    for ( j = 20; i < 40; i++)
    {
        temp=i*i*i;
        printf("%d\t",temp);
    }
printf("\n");
printf("Following are the sum\n");

  
  for (int j = 0; j < 20; j++)
  {
      sum=sum+sqrt(arr[j]);
      printf("%d\t",sum);
      printf("\n");
  }  
return 0;
}

