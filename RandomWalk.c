#include<stdio.h>
#include<math.h>
int main ()
{
	int x=0,y=0;
	int x1,y1,distance1,distance2,add,i=0,j=0,count,average;
	
	printf("Enter the x1 :");
	scanf("%d",&x1);
	
	printf("Enter the y1 :");
	scanf("%d",&y1);

    add=(pow(x1-x,2)+pow(y1-y,2));
    distance1=sqrt(add);
	printf("distance is %d\n",distance1);

	
	
	    
	for(i=0 ; i<j+1;i++)
	{

       x=x1;
	   y=y1;
	    
	   printf("Enter the x1 :");
	   scanf("%d",&x1);
	   printf("Enter the y2 :");
	   scanf("%d",&y1);
	   add=(pow(x1-x,2)+pow(y1-y,2));
       distance2=sqrt(add);
	   printf("distance is %d\n",distance2);
	   count++;
	
	  
	
	 
	  if((x==x1) && (y==y1))
	  {
	      
	      break;
	  }else
	  {
	      j++;
	  }
	}
	
       printf("No of step :%d\n",count);
      average=distance1+distance2;
      average/=2;
      printf("Average distance is %d",average);
}