#include <stdio.h>
#include <stdlib.h>
int sum=0;
int* functonDangling()
{
    int a, b;
    int sum2;
    a = 33;
    b = 9;
     sum = a + b;
    return  &sum;
}
int main2()
{
    // Case1: De allocation of a memory block//
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 31;
    ptr[2] = 32;
    ptr[3] = 33;
    free(ptr); // ptr is now a dangling pointer //
    // case2: Function returning local variable address//
    int *dangptr;
     dangptr = functonDangling();// dangptr is now a dangling pointer //
    // case 3: If a variavble goes out of scope
    int *dangptr3;
    {
        int a = 12;
        dangptr3 = &a;
    }
    // Here variable goes out of scope which means dangptr is pointing to a location which is freed and hence dangptr3 is now a dangling pointer //
    return 0;
}