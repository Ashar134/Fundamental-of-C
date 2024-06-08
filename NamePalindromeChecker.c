#include <stdio.h>
#include <string.h>
char palindrome(char name[]);
int main()
{
    char name[20];

    printf("Enter the name :");
    scanf("%s", name);

    palindrome(name);
}

char palindrome(char name[])
{
    char name1[20];
    int i = 0, j = 0;
    int temp;

    strcpy(name1, name);
    j = strlen(name) - 1;

    while (i > j)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
    }

    if (name[i] == name1[j])
    {
        printf("-------Checking-------\n\n");
        printf("The Name will be  Palindrome\n");
    }
    else
    {
        printf("-------Checking-------\n\n");
        printf("Name is not a Palindrome\n");
    }
}
