#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], r[3][2];
    printf("Enter your first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the %d %d element of your matrix \n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter your second matrix\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the %d %d element of your matrix \n", i, j);
            scanf("%d", &b[i][j]);
        // printf("\t");
        }
        // printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //     printf("Enter the %d %d element of your matrix \n", i,j);
            //     scanf("%d", &b[i][j]);
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
                r[i][j]= sum;
                sum=0;



            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d\t",r[i] [j]);
            // scanf("%d", &b[i][j]);
        }
        printf("\n");
        // printf("\n");
    }

    return 0;
}