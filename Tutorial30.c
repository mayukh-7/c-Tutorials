#include <stdio.h>
int main()
{
    int n;
    printf("Enter 0 to get Normal Triangular Star pattern and 1 to get Reverse Triangular Star pattern\n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Your Normal Triangular Star pattern is given as :\n");

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else if (n == 1)
    {
        printf("Your Reverse Triangular Star pattern is given as : \n");

        for (int i = 5; i> 0; i--)
        {
            for (int j = 0; j < i ; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("You have entered Invalid choice !!\n");
    }
    return 0;
}