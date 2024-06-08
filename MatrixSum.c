#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
  
   

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("Enter the element of arr[%d%d] :",i,j);
           scanf("%d", &arr[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        int sum=0;
        for ( j = 0; j < 3; j++)
        {
        printf("%d\t ",arr[i][j]);
         sum+=arr[i][j];
       
        }
           printf("%d\n",sum);
    }
      
}