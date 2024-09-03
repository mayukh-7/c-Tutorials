#include <stdio.h>

int main()
{
    int num, i = 0;
    int k;
    printf("Enter the number you want multiplication Table of:\n ");
    scanf("%d", &num);
    while (i < 10)
    {

        i = i + 1;
        k = num * i;
        printf("%d\n", k);
    }

    return 0;
}
