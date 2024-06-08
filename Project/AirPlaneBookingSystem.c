#include<stdio.h>
#define row 13
#define col 6
int main ()
{
    char arr[row][col];
    int choice;
    int seat_b_row,seat_b_col;
    int seat_f_row,seat_f_col;
    int seat_e_row,seat_e_col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {            
            arr[i][j]='*';
        }   
    }

   printf("\tA \tB \tC \tD \tE \tF\n");
    
    for (int i = 0; i < row; i++)
    {
        printf("Row %d ",i+1);
        for (int j = 0; j < col; j++)
        {
            printf("\t%c ",arr[i][j]);
        }
        printf("\n");
    }
    
    while (1)
    {
        
    
    
    printf("1. First Class\n");
    printf("2. Business Class\n");
    printf("3. Economy Class\n");
    printf("4. Display Table\n");
    printf("Please Enter your Choice :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :

    printf("Enter the seat by putting rows & column (0-1):");
    scanf("%d %d",&seat_b_row,&seat_b_col);

    if (arr[seat_b_row][seat_b_col]=='X')
    {
        printf("----------------------------\n");
        printf("| The seat is already Booked |\n");
        printf("----------------------------\n");
    }else
    {
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < col; j++)
        {        
            if(arr[i][j]==arr[seat_b_row][seat_b_col])
            {
                arr[seat_b_row][seat_b_col]='X';
            }      
        }
    }
       
    }
    break;

case 2:

    printf("Enter the seat by putting rows & column for Businese Class (2-6):");
    scanf("%d %d",&seat_f_row,&seat_f_col);

    if (arr[seat_f_row][seat_f_col]=='X')
    {
        printf("----------------------------\n");
        printf("| The seat is already Booked |\n");
        printf("----------------------------\n");
    }else
    {

    for (int i = 3; i < 8; i++)
    {
        for (int j = 0; j < 6; j++)
        {  
            if(arr[i][j]==arr[seat_f_row][seat_f_col])
            {
                arr[seat_f_row][seat_f_col]='X';
            }
        }
    }   
    }
        break;

case 3:

    printf("Enter the seat by putting rows & column for Economy Class (7-12):");
    scanf("%d %d",&seat_e_row,&seat_e_col);

    
    if (arr[seat_e_row][seat_e_col]=='X')
    {
        printf("----------------------------\n");
        printf("| The seat is already Booked |\n");
        printf("----------------------------\n");
    }else
    {

    for (int i = 8; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            
            if(arr[i][j] == arr[seat_e_row][seat_e_col])
            {
                arr[seat_e_row][seat_e_col]='X';
            }
        }
    }
    }
    
        break;
case 4:


   printf("\tA \tB \tC \tD \tE \tF\n");
    
    for (int i = 0; i < row; i++)
    {
          printf("Row %d ",i+1);
        for (int j = 0; j < col; j++)
        {
            printf("\t%c ",arr[i][j]);
        }
        printf("\n");
    }
    break;
    
    }
    }
}
