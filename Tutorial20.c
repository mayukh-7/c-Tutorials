#include <stdio.h>

int main()
{
    int i, num;
    printf("Enter the number you want multiplication Table of :\n");
    scanf("%d", &num);
    printf("Table of %d:\n", num);
    for (i = 1; i < 11; i++)
    {
        printf("%dx%d=%d \n", num, i, num * i);
    }

    return 0;
}
