#include <stdio.h>
void StarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ReverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int type, rows;
    printf("Enter the 0 to print Star pattern and 1 to print Reverse Star pattern\n");
    scanf("%d", &type);
    switch (type)
    {
    case 0:
        printf("Enter the number of rows you want\n");
        scanf("%d", &rows);
        StarPattern(rows);
        break;
    case 1:
        printf("Enter the number of rows you want\n");
        scanf("%d", &rows);
        ReverseStarPattern(rows);
        break;
    default:
        printf("You have entered invalid choice !!\n");
        break;
    }
    int k;
    printf("Press any key to exit\n");
    scanf("%d", &k);
    return 0;
}