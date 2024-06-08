#include<stdio.h>
int main ()
{
    int i,j,temp=0,sum=0,result1,save1,save2,even=0,odd=0;
    float average;
    int arr[10];

    printf("Enter the array number :");

    for ( i = 0; i < 10; i++)
{
      scanf("%d",&arr[i]);  
}  

     temp=arr[0]; 
     for ( i= 0; i < 10; i++)
{

    if (temp < arr[i])
   {
           temp=arr[i];  
   }
   
}
     printf("%d is the maximum number\n",temp);


     //For Minimum
     temp=arr[0]; 
     for ( i= 0; i < 10; i++)
{
    if (temp > arr[i])
   {
           temp=arr[i];  
   }   
}
    printf("%d is the minimum number\n",temp);
// For Average
    for ( i= 0; i < 10; i++)
{
    sum+=arr[i];
       
}
    average=sum/10;
    printf("%f is the average \n",average);

    //Last Number
    printf("%d is the last number \n",arr[9]);    
    
    // Index value
    printf("%d is the display at index 2\n",arr[2]);

   //Count Even & Odd number

        for ( i= 0; i < 10; i++)
{
    if (arr[i]%2!=0)
  {
       even++;
  }else
 {
     odd++;
 }
   
}
     printf("%d are the even number",even);
     printf("are the odd number %d",odd);
     
 //Reverse array   
printf("REVERSE ORDER ARRAY\n");
for ( i= 10; i>=0 ; i--)
{
     printf("%d \n",arr[i]);
    
}

}
 