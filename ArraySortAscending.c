#include<stdio.h>
#define size 5
int check_ascending(int arr[]);
int main ()
{
    int arr[size];

    for (int  i = 0; i < size ; i++)
    {
        printf("Enter the %d element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Orignal Order \n");

    for( int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    check_ascending(arr);

}

int check_ascending(int arr[])
{
    int small_no=arr[0];
    for (int i = 0; i < size; i++)         //Checking the smallest no
    {
        if (small_no > arr[i])
        {
            small_no=arr[i];
        }    
    }

    printf("\n%d Smallest number in the array \n",small_no);

    for (int i = 0; i < size ; i++)          
    {
        for (int j = 0; j < size; j++)
        {
            
         if (arr[i] < arr[j])
        {
            small_no=arr[i];
            arr[i]=arr[j];
            arr[j]=small_no;
        }   
         
        }    
    }   
    printf("\nAscending Order\n");

    for( int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
     
}
    
 
    
    

