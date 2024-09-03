#include <stdio.h>

int main()
{
    int age;
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age \n ");
        scanf("%d", &age);
        if (age < 20)
        {
            printf("Your age is %d!!\n", age);
            continue;
        }
        if (age > 20)
        {
            printf("Your age is  more than twenty that is %d!!\n", age);
            break;
        }
    }

    return 0;
}
