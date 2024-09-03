#include <stdio.h>
void ChangeValue(int *a1, int *b1)
{
    int c1 = *a1;
    *a1 = *a1 + *b1;
    *b1 = c1 - *b1;
}
int main()
{
    int a = 4, b = 3;
    printf("The values before the use of call by reference is %d and %d\n", a, b);
    ChangeValue(&a, &b);
    printf("The values after the use of call by reference is %d and %d\n", a, b);
    return 0;
}
