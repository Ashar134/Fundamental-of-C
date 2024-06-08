#include<stdio.h>
#include<stdlib.h>
#define row 3
#define col 3
int check_row_col(char arr[][col],int rows, int cols ,char player);
int Display_game(char arr[][col]);
int main ()
{
    char arr[][col]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int row_1,col_1;
    int row_2,col_2;
    char player_1='X';
    char player_2='0';
    char player=player_1;
    int move=0;

   while (1)
   {
    if (move==9)
    {
        printf("Match Draw....No one Wins\n");
        return 0;
        
    }else
    {
    move++;

    printf("Player %c enter your row and column to place your mark :",player);
    scanf("%d %d",&row_1,&col_1);


    if (arr[row_1][col_1]=='X' || arr[row_1][col_1]=='0')
    {
        printf("Invalid Input.Please enter it again\n");
        player=(player!=player_1) ? player_2 : player_1;   //If user input valid....then re-enter the same user
    }else
    { 
        check_row_col(arr,row_1,col_1,player);   
        player=(player==player_1) ? player_2 : player_1;     //Changing player_1 to player_2 after every turn 
    }   
    }
    }  
}
int check_row_col(char arr[][col], int rows, int cols, char player)
{
    
    for (int i = 0; i < row ; i++)      
    {    
       for (int j = 0; j < col; j++)
       {  
        if (arr[i][j]==arr[rows][cols] )
        {
            arr[i][j]=player;
        }

       }
   
    }
    Display_game(arr);
do
{

    for (int i = 0; i < row; i++)        //Checking rows
    {
    if (arr[i][0]=='X' && arr[i][1]=='X' && arr[i][2]=='X')     
    {
        printf("Player 1 Win\n");
        exit(0);
    }else if (arr[i][0]=='0' && arr[i][1]=='0' && arr[i][2]=='0')
    {
        printf("Player 2 Win\n");
        exit(0);
    }  
    }
     
    for (int i = 0; i < col; i++)       //Checking columns
    {
    if (arr[0][i]=='X' && arr[1][i]=='X' && arr[2][i]=='X')  
    {
        printf("Player 1 Win\n");
        exit(0);
    }else if (arr[0][i]=='0' && arr[1][i]=='0' && arr[2][i]=='0')
    {
        printf("Player 2 Win\n");
        exit(0);
    }  
    }

    if (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X')    //left diagnol
    {
        printf("Player 1 wins\n");
        exit(0);
     
    }else if (arr[0][0]=='0' && arr[1][1]=='0' && arr[2][2]=='0')
    {
        printf("Player 2 wins\n");
        exit(0);

    }else if (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')   //Right diagnol
    {
        printf("Player 1 wins\n");
        exit(0);
    
    }else if (arr[0][0]=='0' && arr[1][1]=='0' && arr[2][2]=='0')
    {
        printf("Player 2 wins\n");
        exit(0);
    }
    }while (!1);

}

int Display_game(char arr[][col])
{

    printf("\n");
    printf(" %c | %c | %c \n", arr[0][0], arr[0][1], arr[0][2]);
    printf("----------\n");
    printf(" %c | %c | %c \n", arr[1][0], arr[1][1], arr[1][2]);
    printf("----------\n");
    printf(" %c | %c | %c \n", arr[2][0], arr[2][1], arr[2][2]);
    printf("\n");
}