#include <stdio.h>
int sum(int a, int b)
{
    // int d=a+b/2; it is used to find the average
    return a + b;
}
void greet(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
void greetGM(int (*fptr)(int, int))
{
    printf("Good morning user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}
int main()
{
    int (*ptr)(int,int);
    ptr=sum;
    greet(ptr);
    greetGM(ptr);

    return 0;
}