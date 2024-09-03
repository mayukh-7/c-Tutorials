#include <stdio.h>
#include "Mayukh.c"
// int sum;
int myfunc(int a, int b)
{
    // auto int sum;
    static int myvar;
    myvar++;
    printf("The value of the sum is %d \n", myvar);
    // sum=a+b;
    // sum = a + b;
    return myvar;
}

// int sum = 98;
int main()
{
    // Declaration -  Telling the compiler about the variable (No space reserved)
    // Definition -  Declaration + space reservation
    register int myvar = myfunc(3, 5); // register is used to store the variables in the CPU register for fast access//
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    // printf("The value of the sum is %d \n", myvar);

    return 0;
}