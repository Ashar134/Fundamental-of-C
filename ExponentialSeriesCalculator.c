#include<stdio.h>
int fact(int);
int power(int,int);

int main()
{
    float sum=0;
    int n,x;

    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);

    for (int k = 0; k <= n; k++)
    {
        sum=sum+(1.0* (power(x,k)) / fact(k) );
    }
    
    printf("%.1f",sum);

    return 0;
}

int fact(int a)
{
    int fact=1;
    for (int i = 1; i <= a ; i++)
    {
        fact*=i;
    }
    return fact;
}

int power(int a,int b)
{
    int  power=1;

    for(int i=1;i<=b;i++)
    {
        power*=a;
    }

return power;
}
