#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Mayukh Maity
int main()
{
    int r;
    int num, num1;
    int p = 0, c = 0;
    char arr[29];
    char name[25];
    printf("Welcome to Rock, Paper and Scissor Game !!\n");
    printf("You Have 3 chances !!\n");
    printf("Enter your name !!\n");
    scanf("%s", &name);
    getchar();
    printf("Choose\n0 for  Rock\n1 for  Paper\n2 for Scissor  !!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n");
        printf("%s Turn !!\n", name);
        scanf("%d", &num);
        printf("Computer's Turn !!\n");
        srand(time(NULL));
        num1 = rand() % 3;
        if (num1 == 0)
        {
            printf("computer  have chosen Rock\n");
        }
        else if (num1 == 1)
        {
            printf("computer have chosen Paper\n");
        }
        else
        {
            printf("computer have chosen Scissor\n");
        }
        if (num == num1)
        {
            printf("\n\n");
            printf("NO POINTS !!\n");
        }
        else if (num == 0 && num1 == 2 || num == 1 && num1 == 0 || num == 2 && num1 == 1)
        {
            printf("\n\n");
            printf("%s got 1 point !!\n", name);
            p++;
        }
        else
        {
            printf("\n\n");
            printf(" Computer got 1 point!!\n");
            c++;
        }
    }
    if (p == c)
    {
        printf("\n\n");
        printf("MATCH DRAWN  !!\n");
    }
    else if (p > c)
    {
        printf("\n\n");
        printf("%s won!!\n", name);
    }
    else
    {
        printf("\n\n");
        printf("Computer won!!\n", name);
    }
    printf("Press any key to exit \n");
    scanf("%d", &r);
    return 0;
}