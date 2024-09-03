#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function
    int (*fptr)(int, int);                           // declaring the function pointer
    fptr = &sum;                                     // Creating a function pointer
    int d = (*fptr)(4, 6);                           // Dereferencing a function pointer

    printf("The value of  is %d\n", fptr(4,6));

    return 0;
}