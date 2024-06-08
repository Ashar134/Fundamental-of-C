#include<stdio.h>
#include<math.h>
int main ()
{
   float disc,root1,root2,discriminant;

    float a,b,c;
    float i=-1.0;

    printf("Enter the 'a' value :");
    scanf("%f",&a);

    printf("Enther the 'b' value :");
    scanf("%f",&b);

    printf("Enter the 'c' value :");
    scanf("%f",&c);


    if(a==0 || b==0 || c==0)
    {
     printf("The value can't be zero");

    }
    else if (a<0 || b<0 || c<0)
    {
     printf("Value must be greater than zero");
    }else if (a>0 && b>0 && c>0)
    {
     
      disc=pow(b,2)-4*a*c;
      
    }
    { 
     if (disc>0)
      {
        discriminant = sqrt((disc));
        root1=(-b+discriminant)/(2*a);
        root2=(-b-discriminant)/(2*a);
        printf("root1=%f \n root2=%f",root1,root2);

      }else if (disc<0)
     {
       discriminant = sqrt((-disc));
       root1=(-b+(-discriminant))/(2*a);
       root2=(-b-(-discriminant))/(2*a);
       printf("root3=%f \n root4=%f",root1,root2);

     }else if (disc==0)
     {
     root1=root2=-b/(2*a);
     printf("Root1=%f Root2=%f",root1,root2);
    
    }

}
}
