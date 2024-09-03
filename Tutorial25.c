
#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int num, k = 1;
    int n3, n1 = 0, n2 = 1;
    printf("Enter the number of terms upto which you want the fibonacci series of \n ");
    scanf("%d", &num);
    printf(" Tne fibonacci series is given as :\n ");
    for (int i = 0; i < num; i++)
    {
        printf("%d,", fib(i));
    }

    return 0;
}
/*if (i == 0)
        {
            printf("0,");
        }
        else if (i == 1)
        {
            printf("1,");
        }
        else
        {
            n3=n1+n2;
            printf("%d,", n3);
            n1=n2;
            n2=n3;
        }*/