#include<stdio.h>
int reversed_num(int num);
int main ()
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

   int reversed=reversed_num(num);

   printf("Reversed number is :%d",reversed);

}
int reversed_num(int num)
{
    int divide_1,divide_2;
    int rem_1,rem_2,reversed;

    rem_1=num%10;
    divide_1=num/10;
    rem_2=divide_1%10;
    divide_2=divide_1/10;
    
    reversed=(rem_1*100)+(rem_2*10)+divide_2;
    
    return reversed;
    

    
}