#include <stdio.h>
void printing();
int bill, budget;
int main()
{
    int again;
    printf("\t------------------------------------\n");
    printf("\tWELCOME TO GLORIA JEAN'S CAFE\n");
    printf("\t-----------------------------------\n\n");
    printf("Enter Your Budget => ");
    scanf("%d", &budget);

    while (budget >= 200)
    {
        printing();
        printf("\nDo You Want to Place Another order?\n\n");
        printf("Press 1 for YES OR Press 2 for NO => ");
        scanf("%d", &again);
        if (again == 1)
        {
            continue;
        }
        else if (again == 2)
        {
            printf("\t----------------------------\n");
            printf("\tTOTAL BILL | %d\n", bill);
            printf("\t----------------------------\n");
            printf("\tREMAINING BUDGET | %d\n", budget);
            printf("\t--------------------------\n\n");
            break;
        }
    }

    if (budget < 200)
    {
        printf("\nYOU ARE OUT OF BUDGET");
    }
    return 0;
}
void printing()
{
    int choice, size;
    printf("\n");
    printf("\t***************\n");
    printf("\tEspresso Types\n");
    printf("\t***************\n");
    printf("\t--------------\n");
    printf("\tPress 1 | Espresso\n");
    printf("\t--------------\n");
    printf("\tPress 2 | Over ice\n");
    printf("\t--------------\n\n");
    printf("Enter your choice => ");
    scanf("%d", &choice);
    printf("\n\n");
    if (choice == 1)
    {
        printf("\t\tFLAVOR\t\t\t|PRICES\n");
        printf("\t----------------------------------------\n");
        printf("\tPress 1 | VANILLA CHILLER \t| 200\n");
        printf("\t----------------------------------------\n");
        printf("\tPress 2 | COCOA LOCO \t\t| 250\n");
        printf("\t----------------------------------------\n");
        printf("\tPress 3 | HAZELNUT MOCA\t\t| 200\n");
        printf("\t----------------------------------------\n");
        printf("\tPress 4 | CARAMEL NUT CHILLER\t| 250\n");
        printf("\t----------------------------------------\n\n");
        printf("Enter your choice => ");
        scanf("%d", &choice);

        printf("\n\n");
        if (choice == 1)
        {
            bill += 200;
            budget -= 200;
        }
        else if (choice == 2)
        {
            bill += 250;
            budget -= 250;
        }
        else if (choice == 3)
        {
            bill += 200;
            budget -= 200;
        }
        else if (choice == 4)
        {
            bill += 250;
            budget -= 250;
        }
        else
        {
            printf("You Have Entered a Wrong Choice!\nMACHINE WILL RESTART\n\n");

            printf("\t------------------------------------\n");
            printf("\tWELCOME TO GLORIA JEAN'S CAFE\n");
            printf("\t-----------------------------------\n\n");

            printing();
        }
    }
    else if (choice == 2)
    {
        printf("\t\tFLAVOR\t\t\t|\tSMALL\t\t|\tMEDIUM\t\t|\tLARGE\n");
        printf("\t----------------------------------------------------------------------------------------------\n");
        printf("\tPress 1 | SIGNATURE ICED COFFEE |\t 200\t\t|\t 250\t\t|\t 300\n");
        printf("\t----------------------------------------------------------------------------------------------\n");
        printf("\tPress 2 | ICED MOCHA \t\t|\t 250\t\t|\t 300\t\t|\t 350\n");
        printf("\t----------------------------------------------------------------------------------------------\n");
        printf("\tPress 3 | ICED AMERICANO\t|\t 200\t\t|\t 250\t\t|\t 300\n");
        printf("\t----------------------------------------------------------------------------------------------\n");
        printf("\tPress 4 | ICED CARAMEL LATTE |\t 250\t\t|\t 300\t\t|\t 400\n");
        printf("\t----------------------------------------------------------------------------------------------\n\n");

        printf("\t--------------\n");
        printf("\tPress 1 | SMALL\n");
        printf("\t--------------\n");
        printf("\tPress 2 | MEDIUM\n");
        printf("\t--------------\n");
        printf("\tPress 3 | LARGE\n");
        printf("\t--------------\n\n");

        printf("Enter your Flavour => ");
        scanf("%d", &choice);
        printf("Enter your Size => ");
        scanf("%d", &size);

        if (choice == 1)
        {
            if (size == 1)
            {
                bill += 200;
                budget -= 200;
            }
            else if (size == 2)
            {
                bill += 250;
                budget -= 250;
            }
            else if (size == 3)
            {
                bill += 300;
                budget -= 300;
            }
        }
        else if (choice == 2)
        {
            if (size == 1)
            {
                bill += 250;
                budget -= 250;
            }
            else if (size == 2)
            {
                bill += 300;
                budget -= 300;
            }
            else if (size == 3)
            {
                bill += 350;
                budget -= 350;
            }
        }
        else if (choice == 3)
        {
            if (size == 1)
            {
                bill += 200;
                budget -= 200;
            }
            else if (size == 2)
            {
                bill += 250;
                budget -= 250;
            }
            else if (size == 3)
            {
                bill += 300;
                budget -= 300;
            }
        }
        else if (choice == 4)
        {
            if (size == 1)
            {
                bill += 250;
                budget -= 250;
            }
            else if (size == 2)
            {
                bill += 300;
                budget -= 300;
            }
            else if (size == 3)
            {
                bill += 400;
                budget -= 400;
            }
        }
    }
}
