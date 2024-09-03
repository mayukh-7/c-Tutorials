#include <stdio.h>
int main()
{
    int a=34;
    int *ptr;// This is a wild pointer//
   // *ptr=35;// This is not a good thing //
    ptr=&a;
    printf("%d \n", *ptr);
    return 0;
}