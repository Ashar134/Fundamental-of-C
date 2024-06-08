#include<stdio.h>
int search_stop(int bus_stop[]);
int highest_passenger(int pas_count[],int bus_stop[]);
int highest_average_count(int pas_count[],int bus_stop[]);
int main ()
{
	int bus_stop[5];
	int pas_count[5];
	int i,j;
	for(i=1 ; i<=5 ; i++)
	{
		printf("Enter the %d bus stand no : ",i);
		scanf("%d",&bus_stop[i]);
		
		printf("Enter the %d bus passengers : ",i);
		scanf("%d",&pas_count[i]);
		printf("-------------------------------\n");
	}
	
	int search=search_stop(bus_stop);             //searching bus stop
	   
	if(search!=-1)
	{
	printf("Bus found at index %d\n",search);
    }
    else
    {
    	printf("bus stop not found\n"); 
	}
	
	int max_passenger=highest_passenger(pas_count,bus_stop);          //Function call of highest passenger	
	highest_average_count(pas_count,bus_stop);                      //Function call for average
}
int search_stop(int bus_stop[])
{
	
	int search;
	int i;
	            
	printf("Enter the bus stop you want to search : ");
	scanf("%d",&search);
	for(i=1 ; i<=5 ; i++)	
	{     
	  if(bus_stop[i]==search)
	  {
		return i;
	  }
	  
    }

        return -1;
}
int highest_passenger(int pas_count[],int bus_stop[])
{
	int temp=0;
	int i;
	int index=1;
	
    temp=pas_count[1];
    for(i= 1; i<=5; i++)
   {
     if(temp < pas_count[i])
     {
     temp=pas_count[i];  
        index=i;
     }
   
   }
     printf("The maximum passengers are %d at index %d on bus stop number %d\n",temp,index,bus_stop[index]);
	
	return temp;
}
int highest_average_count(int pas_count[],int bus_stop[])
{
	int i,j;
	float ave_count=0.0;
	int index=1;
	int temp=0;
	
	for(i=1 ; i<=5 ; i++)
	{
		ave_count+=pas_count[i];		
	}
	
	ave_count/=5;
	printf("Average passenger count: %.2f\n",ave_count);
		
    printf("Stops with passenger counts higher than the average:\n");    //Stop higher than average
    temp=bus_stop[1];
    for(i= 1; i<=5; i++)
   {
     if(temp < bus_stop[i])
     {
     temp=bus_stop[i];  
        index=i;
     }
   }   
    
   	if(temp>ave_count)
   	{
   		printf("Stop : %d  passengers:%d\n",temp, pas_count[index]);		
	}
	else
	{	
		printf("ERROR! Stop not higher than the average\n");
			
	}
	
}
   