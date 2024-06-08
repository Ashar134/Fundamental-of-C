#include <stdio.h>
void main()
{
    int sum = 0;
    int a, b, c, d;

    printf("Enter the 1 rows :");
    scanf("%d", &a);
    printf("Enter the 1 columns :");
    scanf("%d", &b);
    printf("Enter the 2 rows :");
    scanf("%d", &c);
    printf("Enter the 2 columns :");
    scanf("%d", &d);

    int arr1[a][b];
    int arr2[c][d];
    
    if (a && b != c && d)
    {
        printf("Matrix not equal\n");
    }
    else
    {
        printf("----------First Matrix----------\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter the element of arr[%d%d] :", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        printf("----------Second Matrix----------\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("Enter the element of arr2[%d%d] :", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        printf("----------Multiplication----------\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                for (int k = 0; k < c; k++)
                {
                    sum = sum + (arr1[i][k] * arr2[k][j]);
                }
                printf("%d\t", sum);
                sum = 0;
            }
            printf("\n");
        }
    }
}