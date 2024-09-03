#include <stdio.h>

int main()
{
    int num, index =0,i;

    printf("Enter the times you want to print the number \n ");
    scanf("%d", &num);
    do
    {
       
        index = index + 1;
        i= index *num;
         printf("%d\n", i);

    } while (index < 10);

    return 0;
}