#include<stdio.h>
int main ()
{
    int chose_color_1,chose_color_2;

    printf("Menu\n");

    printf("1. Red\n");
    printf("2. Yellow\n");
    printf("3. Blue\n");

    printf("Select first color :");
    scanf("%d",&chose_color_1);
    
    printf("Select Second color :");
    scanf("%d",&chose_color_2);

    if ((chose_color_1==1 || chose_color_1==2 || chose_color_1==3) && (chose_color_2==1 || chose_color_2==2 || chose_color_2==3))
    {   
    
    if ((chose_color_1==1 && chose_color_2==3) || (chose_color_1==3 && chose_color_2==1))
    {
        printf("Red and Bule, you get Purple");

    }else if ((chose_color_1==3 && chose_color_2==2) || ( chose_color_1==2 && chose_color_2==3))
    {
        printf("Blue and Yellow make, you get green");

    }else if ((chose_color_1==1 && chose_color_2==2) || ( chose_color_1==2 && chose_color_2==1))
    {
        printf("Red and Yellow, you get Orange");
    }

    }
    else if (chose_color_1!=1)
    {
        printf("\nInvalid input for Color 1\n");
    }else
    {
        printf("\nInvalid input for Color 2\n");
    }   
   
}