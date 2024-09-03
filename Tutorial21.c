#include <stdio.h>
int Factorial(int n)// it is the recursive option//
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * Factorial(n - 1));
    }
}
int main()
{
    int num;
    //int k = 1;//
    printf("Enter the number you want Factorial of \n ");
    scanf("%d", &num);
 /*   for (int i = num; i > 0; i--)// it is the iterative option //
    {
        k = k * i;
    }*/
   // printf("The Factorial of %d is %d\n", num, k);//

    printf("The Factorial of %d is %d\n", num, Factorial(num));
    return 0;
}
