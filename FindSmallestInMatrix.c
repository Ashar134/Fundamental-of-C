#include<stdio.h>
int main()
{
    int arr[4][3];
    int i,j,temp=0;

    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
          printf("Enter the element of arr[%d%d] :",i,j); 
          scanf("%d",&arr[i][j]);
        }
        
    }
    temp=arr[0][0];
    for ( i = 0; i < 4; i++)
    {
      for ( j = 0; j < 3; j++)
      {
         if (temp>arr[i][j])
        {
            temp=arr[i][j];
        }
      }
        
    }
     
    printf("The smallest element is %d",temp);
}