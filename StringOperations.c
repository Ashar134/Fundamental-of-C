#include <stdio.h>
#include <string.h>

int main()
{
    int c, p = 0, vowels = 0;
    char string[100];
    char string1[100];
    char choice;
    int consonants = 0;

    printf("Please enter a String : ");
    scanf("%s", string);

    printf("A) Count the number of vowels in the string\n");
    printf("B) Count both the vowels and consonants in the string\n");
    printf("C) Display the most frequent character in the string\n");
    printf("D) Concatenate another string with the existing string\n");
    printf("E) Exit the program\n");
    printf("Please Enter Your Choice\n");
    scanf("%s", &choice);

    if (choice == 'A' || choice == 'a')
    {
        while (string[c] != '\0')
        {
            if (string[c] == 'a' || string[c] == 'A' || string[c] == 'e' || string[c] == 'E' || string[c] == 'i' || string[c] == 'I' || string[c] == 'o' || string[c] == 'O' || string[c] == 'u' || string[c] == 'U')
            {
                vowels++;
            }
            c++;
        }

        printf("Number of vowels in the string: %d", vowels);
    }
    if (choice == 'B' || choice == 'b')
    {
        while (string[c] != '\0')
        {
            if (string[c] == 'a' || string[c] == 'A' || string[c] == 'e' || string[c] == 'E' || string[c] == 'i' || string[c] == 'I' || string[c] == 'o' || string[c] == 'O' || string[c] == 'u' || string[c] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
            c++;
        }

        printf("\n Number of vowels in the string: %d", vowels);
        printf("\n Number of Consonants in the string: %d", consonants);
    }

    if (choice == 'C' || choice == 'c')
    {
        int len = strlen(string);
        int freq[256] = {0};
        char result;
        int max = -1;
        for (int i = 0; i < len; i++)
        {
            freq[string[i]]++;
        }

        for (int i = 0; i < len; i++)
        {
            if (max < freq[string[i]])
            {
                max = freq[string[i]];
                result = string[i];
            }
        }
        printf("\n The Maximum Occurring Character in a Given String = %c ", result);
    }

    if (choice == 'E' || choice == 'e')
    {
        printf("You are out of program: \n");
    }
}
