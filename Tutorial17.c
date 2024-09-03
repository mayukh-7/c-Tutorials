#include <stdio.h>

int main()
{
    int age;
    for (int i = 0; i < 8; i++)
    {
        
        for (int j = 0; j < 8; j++)
        {
            printf("Enter your age . Enter 0 to exit \n");
            scanf("%d", &age);
            if (age == 0)
            {
                goto end;
            }
        }
    }
end:
    printf("You have exitted!!\n");
    return 0;
}
