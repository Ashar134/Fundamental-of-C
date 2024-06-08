#include<stdio.h>
int Diagnol_check(int size,int matrix_1[][size],int matrix_2[][size]);
int main ()
{
	int size;
	
	printf("Enter the Size of matrix :");
	scanf("%d",&size);
	
	int matrix_1[size][size];
	int matrix_2[size][size];
	
	for(int i=0 ; i<size ; i++)
	{
		for(int j=0 ; j<size ;j++)
		{
			printf("Enter the values in matrix_1 matrix[%d][%d] :",i,j);
			scanf("%d",&matrix_1[i][j]);
		}
	}
	printf("Matrix_2\n");
	
	for(int i=0 ; i<size ; i++)
	{
		for(int j=0 ; j<size ;j++)
		{
			printf("Enter the values in matrix_2 matrix[%d][%d] :",i,j);
			scanf("%d",&matrix_2[i][j]);
		}
	}
	printf("Matrix_1 is :\n");
	for(int i=0 ; i<size ; i++)
	{
		for(int j=0 ; j<size ;j++)
		{
			printf("%d ",matrix_1[i][j]);
		}
		printf("\n");
    }
    
	printf("Matrix_2 is :\n");
	
	for(int i=0 ; i<size ; i++)
	{
		for(int j=0 ; j<size ;j++)
		{
			printf("%d ",matrix_2[i][j]);
		}
		printf("\n");
    }
    
    Diagnol_check(size,matrix_1,matrix_2);
}
int Diagnol_check(int size,int matrix_1[size][size],int matrix_2[size][size])
{
	int left_sum1=0,left_sum2=0;
	int right_sum1=0,right_sum2=0;
	
	for(int i=0 ; i<size ;i++)
	{
		for(int j=0 ; j<size ; j++)
		{
			if(i==j)
			{
		       left_sum1+=matrix_1[i][j];
		       left_sum2+=matrix_2[i][j];
            }else
            {
			
	        	right_sum1+=matrix_1[i][size-1];
		        right_sum2+=matrix_2[i][size-1];
		
			}
		
		}	
	}
	
    printf("Sum of left diagnol of M_1 :%d\n",left_sum1);
    printf("Sum of left diagnol of M_2 :%d\n",left_sum2);
    
    printf("Sum of Right diagnol of M_1 :%d\n",right_sum1);
    printf("Sum of Right diagnol of M_2 :%d\n",right_sum2);
    
    if(left_sum1==left_sum2 && right_sum1==right_sum2)
    {
    	printf("Equal !\n");
	}else
	{
		printf("Not Equal !\n");
	}
}
