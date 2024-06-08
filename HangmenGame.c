#include <stdio.h>
int main() 
{
    char word[20], guess[20];
    int i, len=0, chances=4, correct;

    printf("Enter the word you want to guess: ");
    scanf("%s",&word);

    while(word[len] != '\0')
    {
        len++;                             // calculate the length of the word
    }
	 
    for(i = 0; i < len; i++)
    {
        guess[i] = '_';          // fill the guess array with underscores
    }

    printf("You have %d chances to guess the word.\n", chances);

    while(chances > 0)
    {
        printf("Guess a letter: ");
        char c;
        scanf(" %c", &c);

        correct = 0;
        for(i = 0; i < len; i++)
	   {
            if(c == word[i])
	        {
                guess[i] = c;
                correct = 1;
            }
       }
  
        printf("Word: ");
        for(i = 0; i < len; i++)
	{
            printf("%c ", guess[i]);          // print the guess array
        }
        printf("\n");
        
        if(correct)
	{
            printf("Correct guess!\n");
        }
	else
	{
            chances--;
            printf("Wrong guess! You have %d chances left.\n", chances);
        }

        int completed = 1;
        for(i = 0; i < len; i++)
	{
        if(guess[i] == '_')
	    {
                completed = 0;
                break;
        }
    }
    if(completed)
	{
        printf("Congratulations! You guessed the word.\n");
        
    }
    }
    printf("Game over. The word was %s.\n", word);

}
