#include <stdio.h>
int main()
{
    int arr1[20], arr2[20], arr3[20];
    int i, j, k = 0, num1, num2;

    printf("Enter the size of set A : ");
    scanf("%d", &num1);
    printf("Enter the Element of set A: \n");

    for (i = 0; i < num1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of set B : ");
    scanf("%d", &num2);
    printf("Enter the Element of set A: \n");
    
    for (i = 0; i < num2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (i = 0; i < num1; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (arr3[j] == arr1[i])
                break;
        }
        if (j == k)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    for (i = 0; i < num2; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (arr3[j] == arr1[i])
                break;
        }
        if (j == k)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }
    printf("Union of set A and set B is : \n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}