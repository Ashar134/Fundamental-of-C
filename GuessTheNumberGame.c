#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int choice, max_num = 10, min_num = 1, num_chances = 5;
    int random_num, guess;

    printf("\t\t-------------------------------\n");
    printf("\t\t|Welcome to the guessing game!|\n");
    printf("\t\t-------------------------------\n");
    
    srand(time(0));

    do {
        printf("Choose an Option:\n");
        printf("1. Play game\n");
        printf("2. Change maximum number\n");
        printf("3. Change minimum number\n");
        printf("4. Exit game\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                random_num = rand() % (max_num - min_num + 1) + min_num;
                num_chances = 5;
                printf("Guess a number between %d and %d:\n", min_num, max_num);

                while (num_chances > 0)
	          	{
                    printf("Guess (%d chances left): ", num_chances);
                    scanf("%d", &guess);
                    num_chances--;

                    if (guess == random_num) 
		            {
                        printf("Congratulations! You guessed the number!\n");
                        break;  
                    } 
		            else if (guess < random_num)
		            {
                        printf("Too low.\n");
                    }
             	    else
         	    {
                        printf("Too high.\n");
                    }
                }

                if (num_chances == 0)
                {
                    printf("Sorry, you lost! The number was %d.\n", random_num);
                }
                break;

            case 2:
                printf("Enter the new maximum number: ");
                scanf("%d", &max_num);
                break;

            case 3:
                printf("Enter the new minimum number: ");
                scanf("%d", &min_num);
                break;

            case 4:
                printf("Thanks for playing! Goodbye.\n");
               return 0;

            default:
                printf("Invalid choice. Please enter a valid choice.\n");
                break;
        }
    } while (1);

    return 0;
}
