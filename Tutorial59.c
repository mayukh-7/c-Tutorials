#include <stdio.h>
#include "Tutorial54.c"
#define PI 3.14
#define SQUARE(x) x*x

int main()
{
    // int var=0;

    float var=PI;
    int* ptr= functonDangling();
    int r=4;
    // printf("This is me %d\n", var);
    printf("The value of PI is %f\n", var);
    printf("The area of circle is %f\n", PI*SQUARE(r));
    return 0;
}