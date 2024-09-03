#include <stdio.h>

int main()
{
    int a = 77;
    int *ptra = &a;
    int *ptra2 = NULL;
    printf("The address of a is %p\n ", &a);
    printf("The address of a is %p\n ", ptra);
    printf("The address of ptra is %p\n ", &ptra);
    printf("The value of a is %d\n ", a);
    printf("The value of a is %d\n ", *ptra);
    printf("The value of a is %d\n ", ptra2);
    return 0;
}
