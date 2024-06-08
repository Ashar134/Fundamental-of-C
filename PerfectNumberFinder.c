#include<stdio.h>
int main ()
{
int numb,i,j,sum;
   
   printf("Enter the n range :");
   scanf("%d",&numb);

    for ( i =1 ; i<=numb;i++)
    {
       sum=0;
        for ( j = 1; j <i; j++)
        {
        if (i%j==0)
        
        {
           sum=sum+j;
        }
        }    

     if (sum==i)
    {
       printf("%d ",i);
     
    }

}
}