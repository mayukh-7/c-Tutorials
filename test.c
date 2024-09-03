#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char name[44];
static int l = 0;

char userinput()
{
    char u[47];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("%s's TURN!\n", name);
    printf("Please enter rock, paper, or scissor in small letters: ");
    scanf("%s", u);
    return u[0];
}

int generatenumber()
{
    srand(time(NULL));
    return rand() % 3;
}

char computersinput()
{
    char c;
    int num;
    printf("Computer's TURN!\n");
    num = generatenumber();
    switch (num)
    {
        case 0:
            printf("Computer has chosen rock!\n");
            c = 'r';
            break;
        case 1:
            printf("Computer has chosen paper!\n");
            c = 'p';
            break;
        case 2:
            printf("Computer has chosen scissor!\n");
            c = 's';
            break;
        default:
            break;
    }
    return c;
}
// ... (other function definitions)

int result()
{
    static int k = 0;
    char d[47], e[47];
    d[47] = userinput();
    e[47] = computersinput();

    int comparison_result = strcmp(d, e);
    if (comparison_result == 0)
    {
        printf("DRAW!! %s you got 0 point\n", name);
    }
    else if (comparison_result < 0)
    {
        printf("YOU WIN!! %s you got 1 point\n", name);
        k++;
    }
    else
    {
        printf("COMPUTER WIN!!  COMPUTER got 1 point\n");
        l++;
    }
    return k;
}

void winners()
{
    int j = result();
    if (j > l)
    {
        printf("%s WINS!!\n", name);
    }
    else
    {
        printf("COMPUTER WINS!!\n");
    }
}

int main()
{
    int n1;
    char user_choice;
    int i = 0;
    while (i < 3)
    {
        user_choice = userinput();
        char computer_choice = computersinput();
        n1 = result();
        i++;
        // Rest of your game logic...
    }
    winners();
    return 0;
}
